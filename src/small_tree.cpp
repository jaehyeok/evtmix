// small_tree: base class to handle reduce tree ntuples
//File generated with generate_small_tree.exe

#include "small_tree.hpp"

#include <stdexcept>
#include <string>
#include <iostream>
#include <vector>

#include "TROOT.h"
#include "TTree.h"
#include "TBranch.h"
#include "TChain.h"
#include "TTreeFormula.h"

using namespace std;

bool small_tree::VectorLoader::loaded_ = false;

small_tree::VectorLoader small_tree::vl_ = small_tree::VectorLoader();

small_tree::VectorLoader::VectorLoader(){
  if(!loaded_){
    gROOT->ProcessLine("#include <vector>");
    loaded_ = true;
  }
}

const double small_tree::bad_val_ = -999.;

small_tree::small_tree():
  chain_("junk", "junk"),
  tree_("tree", "tree"),
  entry_(0),
  read_only_(false){
}

small_tree::small_tree(const string &filename):
  chain_("tree","tree"),
  tree_("junk","junk"),
  entry_(0),
  read_only_(true){
  chain_.Add(filename.c_str());
}

void small_tree::Fill(){
  if(read_only_){
    throw std::logic_error("Trying to write to read-only tree");
  }else{
    tree_.Fill();
  }

  //Resetting variables
}

void small_tree::Write(){
  if(read_only_){
    throw std::logic_error("Trying to write to read-only tree.");
  }else{
    tree_.Write();
  }
}

string small_tree::Type() const{
  return "";
}

small_tree::~small_tree(){
}

int small_tree::Add(const std::string &filename){
  if(!read_only_){
    throw std::logic_error("Trying to add files to tree opened for writing.");
  }
  return chain_.Add(filename.c_str());
}

float small_tree::GetBranchValue(TString branch){
 TTreeFormula f("formula",branch, &chain_);
 float result = f.EvalInstance(0);
 return result;
}

bool small_tree::PassString(TString cut){
 TTreeFormula f("formula",cut, &chain_);
 bool result = f.EvalInstance(0);
 return result;
}

long small_tree::GetEntries() const{
  if(read_only_){
    return chain_.GetEntries();
  }else{
    return tree_.GetEntries();
  }
}

void small_tree::GetEntry(const long entry){
  if(!read_only_){
    throw std::logic_error("Trying to read from write-only tree.");
  }

  entry_ = chain_.LoadTree(entry);
}

small_tree* NewTree(const std::type_info &type){

  if(type == typeid(small_tree)) return new small_tree;
  else return new small_tree;
}

