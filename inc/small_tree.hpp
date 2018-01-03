// small_tree: base class to handle reduced tree ntuples
// File generated with generate_small_tree.exe

#ifndef H_SMALL_TREE
#define H_SMALL_TREE

#include <vector>
#include <string>

#include "TTree.h"
#include "TChain.h"
#include "TTreeFormula.h"

class small_tree{
public:
  small_tree(); // Constructor to create tree
  small_tree(const std::string &filename); // Constructor to read tree

  int Add(const std::string &filename);
  long GetEntries() const;
  virtual void GetEntry(const long entry);
  float GetBranchValue(TString branch);
  bool PassString(TString cut);

  virtual void Fill();
  void Write();

  virtual std::string Type() const;

  static const double bad_val_;

  virtual ~small_tree();



protected:
  TChain chain_;
  TTree tree_;
  long entry_;
  const bool read_only_;

private:
  class VectorLoader{
  public:
    VectorLoader();
  private:
    static bool loaded_;
  };

  static VectorLoader vl_;
};

small_tree* NewTree(const std::type_info &type);


#endif
