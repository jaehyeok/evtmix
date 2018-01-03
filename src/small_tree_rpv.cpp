// small_tree_rpv: rpv version of small_tree to handle reduce tree ntuples
//File generated with generate_small_tree.exe

#include "small_tree.hpp"

#include "small_tree_rpv.hpp"

#include <stdexcept>
#include <string>
#include <vector>

#include "TTree.h"
#include "TBranch.h"
#include "TChain.h"

using namespace std;

small_tree_rpv::small_tree_rpv():
  small_tree(),
  fromGS_(0),
  b_fromGS_(tree_.Branch("fromGS", &fromGS_)),
  c_fromGS_(false),
  json12p9_(0),
  b_json12p9_(tree_.Branch("json12p9", &json12p9_)),
  c_json12p9_(false),
  json7p65_(0),
  b_json7p65_(tree_.Branch("json7p65", &json7p65_)),
  c_json7p65_(false),
  pass_(0),
  b_pass_(tree_.Branch("pass", &pass_)),
  c_pass_(false),
  stitch_(0),
  b_stitch_(tree_.Branch("stitch", &stitch_)),
  c_stitch_(false),
  stitch_ht_(0),
  b_stitch_ht_(tree_.Branch("stitch_ht", &stitch_ht_)),
  c_stitch_ht_(false),
  eff_trig_(0),
  b_eff_trig_(tree_.Branch("eff_trig", &eff_trig_)),
  c_eff_trig_(false),
  mj12_(0),
  b_mj12_(tree_.Branch("mj12", &mj12_)),
  c_mj12_(false),
  w_btag_(0),
  b_w_btag_(tree_.Branch("w_btag", &w_btag_)),
  c_w_btag_(false),
  w_btag_gh_(0),
  b_w_btag_gh_(tree_.Branch("w_btag_gh", &w_btag_gh_)),
  c_w_btag_gh_(false),
  w_isr_(0),
  b_w_isr_(tree_.Branch("w_isr", &w_isr_)),
  c_w_isr_(false),
  w_lep_(0),
  b_w_lep_(tree_.Branch("w_lep", &w_lep_)),
  c_w_lep_(false),
  w_pu_(0),
  b_w_pu_(tree_.Branch("w_pu", &w_pu_)),
  c_w_pu_(false),
  w_pu_rpv_(0),
  b_w_pu_rpv_(tree_.Branch("w_pu_rpv", &w_pu_rpv_)),
  c_w_pu_rpv_(false),
  w_toppt_(0),
  b_w_toppt_(tree_.Branch("w_toppt", &w_toppt_)),
  c_w_toppt_(false),
  sys_pass_(0),
  p_sys_pass_(&sys_pass_),
  b_sys_pass_(tree_.Branch("sys_pass", &p_sys_pass_)),
  c_sys_pass_(false),
  trig_(0),
  p_trig_(&trig_),
  b_trig_(tree_.Branch("trig", &p_trig_)),
  c_trig_(false),
  dr_bb_(0),
  p_dr_bb_(&dr_bb_),
  b_dr_bb_(tree_.Branch("dr_bb", &p_dr_bb_)),
  c_dr_bb_(false),
  sys_bctag_(0),
  p_sys_bctag_(&sys_bctag_),
  b_sys_bctag_(tree_.Branch("sys_bctag", &p_sys_bctag_)),
  c_sys_bctag_(false),
  sys_ht_(0),
  p_sys_ht_(&sys_ht_),
  b_sys_ht_(tree_.Branch("sys_ht", &p_sys_ht_)),
  c_sys_ht_(false),
  sys_isr_(0),
  p_sys_isr_(&sys_isr_),
  b_sys_isr_(tree_.Branch("sys_isr", &p_sys_isr_)),
  c_sys_isr_(false),
  sys_lep_(0),
  p_sys_lep_(&sys_lep_),
  b_sys_lep_(tree_.Branch("sys_lep", &p_sys_lep_)),
  c_sys_lep_(false),
  sys_mj12_(0),
  p_sys_mj12_(&sys_mj12_),
  b_sys_mj12_(tree_.Branch("sys_mj12", &p_sys_mj12_)),
  c_sys_mj12_(false),
  sys_muf_(0),
  p_sys_muf_(&sys_muf_),
  b_sys_muf_(tree_.Branch("sys_muf", &p_sys_muf_)),
  c_sys_muf_(false),
  sys_mur_(0),
  p_sys_mur_(&sys_mur_),
  b_sys_mur_(tree_.Branch("sys_mur", &p_sys_mur_)),
  c_sys_mur_(false),
  sys_murf_(0),
  p_sys_murf_(&sys_murf_),
  b_sys_murf_(tree_.Branch("sys_murf", &p_sys_murf_)),
  c_sys_murf_(false),
  sys_pu_(0),
  p_sys_pu_(&sys_pu_),
  b_sys_pu_(tree_.Branch("sys_pu", &p_sys_pu_)),
  c_sys_pu_(false),
  sys_udsgtag_(0),
  p_sys_udsgtag_(&sys_udsgtag_),
  b_sys_udsgtag_(tree_.Branch("sys_udsgtag", &p_sys_udsgtag_)),
  c_sys_udsgtag_(false),
  w_pdf_(0),
  p_w_pdf_(&w_pdf_),
  b_w_pdf_(tree_.Branch("w_pdf", &p_w_pdf_)),
  c_w_pdf_(false),
  jets_hflavor_(0),
  p_jets_hflavor_(&jets_hflavor_),
  b_jets_hflavor_(tree_.Branch("jets_hflavor", &p_jets_hflavor_)),
  c_jets_hflavor_(false),
  sys_nbm_(0),
  p_sys_nbm_(&sys_nbm_),
  b_sys_nbm_(tree_.Branch("sys_nbm", &p_sys_nbm_)),
  c_sys_nbm_(false),
  sys_njets_(0),
  p_sys_njets_(&sys_njets_),
  b_sys_njets_(tree_.Branch("sys_njets", &p_sys_njets_)),
  c_sys_njets_(false){
}

small_tree_rpv::small_tree_rpv(const string &filename):
  small_tree(filename),
  fromGS_(0),
  b_fromGS_(NULL),
  c_fromGS_(false),
  json12p9_(0),
  b_json12p9_(NULL),
  c_json12p9_(false),
  json7p65_(0),
  b_json7p65_(NULL),
  c_json7p65_(false),
  pass_(0),
  b_pass_(NULL),
  c_pass_(false),
  stitch_(0),
  b_stitch_(NULL),
  c_stitch_(false),
  stitch_ht_(0),
  b_stitch_ht_(NULL),
  c_stitch_ht_(false),
  eff_trig_(0),
  b_eff_trig_(NULL),
  c_eff_trig_(false),
  mj12_(0),
  b_mj12_(NULL),
  c_mj12_(false),
  w_btag_(0),
  b_w_btag_(NULL),
  c_w_btag_(false),
  w_btag_gh_(0),
  b_w_btag_gh_(NULL),
  c_w_btag_gh_(false),
  w_isr_(0),
  b_w_isr_(NULL),
  c_w_isr_(false),
  w_lep_(0),
  b_w_lep_(NULL),
  c_w_lep_(false),
  w_pu_(0),
  b_w_pu_(NULL),
  c_w_pu_(false),
  w_pu_rpv_(0),
  b_w_pu_rpv_(NULL),
  c_w_pu_rpv_(false),
  w_toppt_(0),
  b_w_toppt_(NULL),
  c_w_toppt_(false),
  sys_pass_(0),
  p_sys_pass_(&sys_pass_),
  b_sys_pass_(NULL),
  c_sys_pass_(false),
  trig_(0),
  p_trig_(&trig_),
  b_trig_(NULL),
  c_trig_(false),
  dr_bb_(0),
  p_dr_bb_(&dr_bb_),
  b_dr_bb_(NULL),
  c_dr_bb_(false),
  sys_bctag_(0),
  p_sys_bctag_(&sys_bctag_),
  b_sys_bctag_(NULL),
  c_sys_bctag_(false),
  sys_ht_(0),
  p_sys_ht_(&sys_ht_),
  b_sys_ht_(NULL),
  c_sys_ht_(false),
  sys_isr_(0),
  p_sys_isr_(&sys_isr_),
  b_sys_isr_(NULL),
  c_sys_isr_(false),
  sys_lep_(0),
  p_sys_lep_(&sys_lep_),
  b_sys_lep_(NULL),
  c_sys_lep_(false),
  sys_mj12_(0),
  p_sys_mj12_(&sys_mj12_),
  b_sys_mj12_(NULL),
  c_sys_mj12_(false),
  sys_muf_(0),
  p_sys_muf_(&sys_muf_),
  b_sys_muf_(NULL),
  c_sys_muf_(false),
  sys_mur_(0),
  p_sys_mur_(&sys_mur_),
  b_sys_mur_(NULL),
  c_sys_mur_(false),
  sys_murf_(0),
  p_sys_murf_(&sys_murf_),
  b_sys_murf_(NULL),
  c_sys_murf_(false),
  sys_pu_(0),
  p_sys_pu_(&sys_pu_),
  b_sys_pu_(NULL),
  c_sys_pu_(false),
  sys_udsgtag_(0),
  p_sys_udsgtag_(&sys_udsgtag_),
  b_sys_udsgtag_(NULL),
  c_sys_udsgtag_(false),
  w_pdf_(0),
  p_w_pdf_(&w_pdf_),
  b_w_pdf_(NULL),
  c_w_pdf_(false),
  jets_hflavor_(0),
  p_jets_hflavor_(&jets_hflavor_),
  b_jets_hflavor_(NULL),
  c_jets_hflavor_(false),
  sys_nbm_(0),
  p_sys_nbm_(&sys_nbm_),
  b_sys_nbm_(NULL),
  c_sys_nbm_(false),
  sys_njets_(0),
  p_sys_njets_(&sys_njets_),
  b_sys_njets_(NULL),
  c_sys_njets_(false){
  chain_.SetBranchAddress("fromGS", &fromGS_, &b_fromGS_);
  chain_.SetBranchAddress("json12p9", &json12p9_, &b_json12p9_);
  chain_.SetBranchAddress("json7p65", &json7p65_, &b_json7p65_);
  chain_.SetBranchAddress("pass", &pass_, &b_pass_);
  chain_.SetBranchAddress("stitch", &stitch_, &b_stitch_);
  chain_.SetBranchAddress("stitch_ht", &stitch_ht_, &b_stitch_ht_);
  chain_.SetBranchAddress("eff_trig", &eff_trig_, &b_eff_trig_);
  chain_.SetBranchAddress("mj12", &mj12_, &b_mj12_);
  chain_.SetBranchAddress("w_btag", &w_btag_, &b_w_btag_);
  chain_.SetBranchAddress("w_btag_gh", &w_btag_gh_, &b_w_btag_gh_);
  chain_.SetBranchAddress("w_isr", &w_isr_, &b_w_isr_);
  chain_.SetBranchAddress("w_lep", &w_lep_, &b_w_lep_);
  chain_.SetBranchAddress("w_pu", &w_pu_, &b_w_pu_);
  chain_.SetBranchAddress("w_pu_rpv", &w_pu_rpv_, &b_w_pu_rpv_);
  chain_.SetBranchAddress("w_toppt", &w_toppt_, &b_w_toppt_);
  chain_.SetBranchAddress("sys_pass", &p_sys_pass_, &b_sys_pass_);
  chain_.SetBranchAddress("trig", &p_trig_, &b_trig_);
  chain_.SetBranchAddress("dr_bb", &p_dr_bb_, &b_dr_bb_);
  chain_.SetBranchAddress("sys_bctag", &p_sys_bctag_, &b_sys_bctag_);
  chain_.SetBranchAddress("sys_ht", &p_sys_ht_, &b_sys_ht_);
  chain_.SetBranchAddress("sys_isr", &p_sys_isr_, &b_sys_isr_);
  chain_.SetBranchAddress("sys_lep", &p_sys_lep_, &b_sys_lep_);
  chain_.SetBranchAddress("sys_mj12", &p_sys_mj12_, &b_sys_mj12_);
  chain_.SetBranchAddress("sys_muf", &p_sys_muf_, &b_sys_muf_);
  chain_.SetBranchAddress("sys_mur", &p_sys_mur_, &b_sys_mur_);
  chain_.SetBranchAddress("sys_murf", &p_sys_murf_, &b_sys_murf_);
  chain_.SetBranchAddress("sys_pu", &p_sys_pu_, &b_sys_pu_);
  chain_.SetBranchAddress("sys_udsgtag", &p_sys_udsgtag_, &b_sys_udsgtag_);
  chain_.SetBranchAddress("w_pdf", &p_w_pdf_, &b_w_pdf_);
  chain_.SetBranchAddress("jets_hflavor", &p_jets_hflavor_, &b_jets_hflavor_);
  chain_.SetBranchAddress("sys_nbm", &p_sys_nbm_, &b_sys_nbm_);
  chain_.SetBranchAddress("sys_njets", &p_sys_njets_, &b_sys_njets_);
}

void small_tree_rpv::Fill(){
  small_tree::Fill();
  //Resetting variables
  fromGS_ = static_cast<bool >(bad_val_);
  json12p9_ = static_cast<bool >(bad_val_);
  json7p65_ = static_cast<bool >(bad_val_);
  pass_ = static_cast<bool >(bad_val_);
  stitch_ = static_cast<bool >(bad_val_);
  stitch_ht_ = static_cast<bool >(bad_val_);
  eff_trig_ = static_cast<float >(bad_val_);
  mj12_ = static_cast<float >(bad_val_);
  w_btag_ = static_cast<float >(bad_val_);
  w_btag_gh_ = static_cast<float >(bad_val_);
  w_isr_ = static_cast<float >(bad_val_);
  w_lep_ = static_cast<float >(bad_val_);
  w_pu_ = static_cast<float >(bad_val_);
  w_pu_rpv_ = static_cast<float >(bad_val_);
  w_toppt_ = static_cast<float >(bad_val_);
  sys_pass_.clear();
  trig_.clear();
  dr_bb_.clear();
  sys_bctag_.clear();
  sys_ht_.clear();
  sys_isr_.clear();
  sys_lep_.clear();
  sys_mj12_.clear();
  sys_muf_.clear();
  sys_mur_.clear();
  sys_murf_.clear();
  sys_pu_.clear();
  sys_udsgtag_.clear();
  w_pdf_.clear();
  jets_hflavor_.clear();
  sys_nbm_.clear();
  sys_njets_.clear();
}

string small_tree_rpv::Type() const{
  return "rpv";
}

small_tree_rpv::~small_tree_rpv(){
}

void small_tree_rpv::GetEntry(const long entry){
  small_tree::GetEntry(entry);

  c_fromGS_ = false;
  c_json12p9_ = false;
  c_json7p65_ = false;
  c_pass_ = false;
  c_stitch_ = false;
  c_stitch_ht_ = false;
  c_eff_trig_ = false;
  c_mj12_ = false;
  c_w_btag_ = false;
  c_w_btag_gh_ = false;
  c_w_isr_ = false;
  c_w_lep_ = false;
  c_w_pu_ = false;
  c_w_pu_rpv_ = false;
  c_w_toppt_ = false;
  c_sys_pass_ = false;
  c_trig_ = false;
  c_dr_bb_ = false;
  c_sys_bctag_ = false;
  c_sys_ht_ = false;
  c_sys_isr_ = false;
  c_sys_lep_ = false;
  c_sys_mj12_ = false;
  c_sys_muf_ = false;
  c_sys_mur_ = false;
  c_sys_murf_ = false;
  c_sys_pu_ = false;
  c_sys_udsgtag_ = false;
  c_w_pdf_ = false;
  c_jets_hflavor_ = false;
  c_sys_nbm_ = false;
  c_sys_njets_ = false;
}

bool  const & small_tree_rpv::fromGS() const{
  if(!read_only_){
    throw std::logic_error("Trying to write to const tree.");
  }
  if(!c_fromGS_ && b_fromGS_){
    b_fromGS_->GetEntry(entry_);
    c_fromGS_ = true;
  }
  return fromGS_;
}

bool  const & small_tree_rpv::json12p9() const{
  if(!read_only_){
    throw std::logic_error("Trying to write to const tree.");
  }
  if(!c_json12p9_ && b_json12p9_){
    b_json12p9_->GetEntry(entry_);
    c_json12p9_ = true;
  }
  return json12p9_;
}

bool  const & small_tree_rpv::json7p65() const{
  if(!read_only_){
    throw std::logic_error("Trying to write to const tree.");
  }
  if(!c_json7p65_ && b_json7p65_){
    b_json7p65_->GetEntry(entry_);
    c_json7p65_ = true;
  }
  return json7p65_;
}

bool  const & small_tree_rpv::pass() const{
  if(!read_only_){
    throw std::logic_error("Trying to write to const tree.");
  }
  if(!c_pass_ && b_pass_){
    b_pass_->GetEntry(entry_);
    c_pass_ = true;
  }
  return pass_;
}

bool  const & small_tree_rpv::stitch() const{
  if(!read_only_){
    throw std::logic_error("Trying to write to const tree.");
  }
  if(!c_stitch_ && b_stitch_){
    b_stitch_->GetEntry(entry_);
    c_stitch_ = true;
  }
  return stitch_;
}

bool  const & small_tree_rpv::stitch_ht() const{
  if(!read_only_){
    throw std::logic_error("Trying to write to const tree.");
  }
  if(!c_stitch_ht_ && b_stitch_ht_){
    b_stitch_ht_->GetEntry(entry_);
    c_stitch_ht_ = true;
  }
  return stitch_ht_;
}

float  const & small_tree_rpv::eff_trig() const{
  if(!read_only_){
    throw std::logic_error("Trying to write to const tree.");
  }
  if(!c_eff_trig_ && b_eff_trig_){
    b_eff_trig_->GetEntry(entry_);
    c_eff_trig_ = true;
  }
  return eff_trig_;
}

float  const & small_tree_rpv::mj12() const{
  if(!read_only_){
    throw std::logic_error("Trying to write to const tree.");
  }
  if(!c_mj12_ && b_mj12_){
    b_mj12_->GetEntry(entry_);
    c_mj12_ = true;
  }
  return mj12_;
}

float  const & small_tree_rpv::w_btag() const{
  if(!read_only_){
    throw std::logic_error("Trying to write to const tree.");
  }
  if(!c_w_btag_ && b_w_btag_){
    b_w_btag_->GetEntry(entry_);
    c_w_btag_ = true;
  }
  return w_btag_;
}

float  const & small_tree_rpv::w_btag_gh() const{
  if(!read_only_){
    throw std::logic_error("Trying to write to const tree.");
  }
  if(!c_w_btag_gh_ && b_w_btag_gh_){
    b_w_btag_gh_->GetEntry(entry_);
    c_w_btag_gh_ = true;
  }
  return w_btag_gh_;
}

float  const & small_tree_rpv::w_isr() const{
  if(!read_only_){
    throw std::logic_error("Trying to write to const tree.");
  }
  if(!c_w_isr_ && b_w_isr_){
    b_w_isr_->GetEntry(entry_);
    c_w_isr_ = true;
  }
  return w_isr_;
}

float  const & small_tree_rpv::w_lep() const{
  if(!read_only_){
    throw std::logic_error("Trying to write to const tree.");
  }
  if(!c_w_lep_ && b_w_lep_){
    b_w_lep_->GetEntry(entry_);
    c_w_lep_ = true;
  }
  return w_lep_;
}

float  const & small_tree_rpv::w_pu() const{
  if(!read_only_){
    throw std::logic_error("Trying to write to const tree.");
  }
  if(!c_w_pu_ && b_w_pu_){
    b_w_pu_->GetEntry(entry_);
    c_w_pu_ = true;
  }
  return w_pu_;
}

float  const & small_tree_rpv::w_pu_rpv() const{
  if(!read_only_){
    throw std::logic_error("Trying to write to const tree.");
  }
  if(!c_w_pu_rpv_ && b_w_pu_rpv_){
    b_w_pu_rpv_->GetEntry(entry_);
    c_w_pu_rpv_ = true;
  }
  return w_pu_rpv_;
}

float  const & small_tree_rpv::w_toppt() const{
  if(!read_only_){
    throw std::logic_error("Trying to write to const tree.");
  }
  if(!c_w_toppt_ && b_w_toppt_){
    b_w_toppt_->GetEntry(entry_);
    c_w_toppt_ = true;
  }
  return w_toppt_;
}

std::vector<bool>  const & small_tree_rpv::sys_pass() const{
  if(!read_only_){
    throw std::logic_error("Trying to write to const tree.");
  }
  if(!c_sys_pass_ && b_sys_pass_){
    b_sys_pass_->GetEntry(entry_);
    c_sys_pass_ = true;
  }
  return sys_pass_;
}

std::vector<bool>  const & small_tree_rpv::trig() const{
  if(!read_only_){
    throw std::logic_error("Trying to write to const tree.");
  }
  if(!c_trig_ && b_trig_){
    b_trig_->GetEntry(entry_);
    c_trig_ = true;
  }
  return trig_;
}

std::vector<float>  const & small_tree_rpv::dr_bb() const{
  if(!read_only_){
    throw std::logic_error("Trying to write to const tree.");
  }
  if(!c_dr_bb_ && b_dr_bb_){
    b_dr_bb_->GetEntry(entry_);
    c_dr_bb_ = true;
  }
  return dr_bb_;
}

std::vector<float>  const & small_tree_rpv::sys_bctag() const{
  if(!read_only_){
    throw std::logic_error("Trying to write to const tree.");
  }
  if(!c_sys_bctag_ && b_sys_bctag_){
    b_sys_bctag_->GetEntry(entry_);
    c_sys_bctag_ = true;
  }
  return sys_bctag_;
}

std::vector<float>  const & small_tree_rpv::sys_ht() const{
  if(!read_only_){
    throw std::logic_error("Trying to write to const tree.");
  }
  if(!c_sys_ht_ && b_sys_ht_){
    b_sys_ht_->GetEntry(entry_);
    c_sys_ht_ = true;
  }
  return sys_ht_;
}

std::vector<float>  const & small_tree_rpv::sys_isr() const{
  if(!read_only_){
    throw std::logic_error("Trying to write to const tree.");
  }
  if(!c_sys_isr_ && b_sys_isr_){
    b_sys_isr_->GetEntry(entry_);
    c_sys_isr_ = true;
  }
  return sys_isr_;
}

std::vector<float>  const & small_tree_rpv::sys_lep() const{
  if(!read_only_){
    throw std::logic_error("Trying to write to const tree.");
  }
  if(!c_sys_lep_ && b_sys_lep_){
    b_sys_lep_->GetEntry(entry_);
    c_sys_lep_ = true;
  }
  return sys_lep_;
}

std::vector<float>  const & small_tree_rpv::sys_mj12() const{
  if(!read_only_){
    throw std::logic_error("Trying to write to const tree.");
  }
  if(!c_sys_mj12_ && b_sys_mj12_){
    b_sys_mj12_->GetEntry(entry_);
    c_sys_mj12_ = true;
  }
  return sys_mj12_;
}

std::vector<float>  const & small_tree_rpv::sys_muf() const{
  if(!read_only_){
    throw std::logic_error("Trying to write to const tree.");
  }
  if(!c_sys_muf_ && b_sys_muf_){
    b_sys_muf_->GetEntry(entry_);
    c_sys_muf_ = true;
  }
  return sys_muf_;
}

std::vector<float>  const & small_tree_rpv::sys_mur() const{
  if(!read_only_){
    throw std::logic_error("Trying to write to const tree.");
  }
  if(!c_sys_mur_ && b_sys_mur_){
    b_sys_mur_->GetEntry(entry_);
    c_sys_mur_ = true;
  }
  return sys_mur_;
}

std::vector<float>  const & small_tree_rpv::sys_murf() const{
  if(!read_only_){
    throw std::logic_error("Trying to write to const tree.");
  }
  if(!c_sys_murf_ && b_sys_murf_){
    b_sys_murf_->GetEntry(entry_);
    c_sys_murf_ = true;
  }
  return sys_murf_;
}

std::vector<float>  const & small_tree_rpv::sys_pu() const{
  if(!read_only_){
    throw std::logic_error("Trying to write to const tree.");
  }
  if(!c_sys_pu_ && b_sys_pu_){
    b_sys_pu_->GetEntry(entry_);
    c_sys_pu_ = true;
  }
  return sys_pu_;
}

std::vector<float>  const & small_tree_rpv::sys_udsgtag() const{
  if(!read_only_){
    throw std::logic_error("Trying to write to const tree.");
  }
  if(!c_sys_udsgtag_ && b_sys_udsgtag_){
    b_sys_udsgtag_->GetEntry(entry_);
    c_sys_udsgtag_ = true;
  }
  return sys_udsgtag_;
}

std::vector<float>  const & small_tree_rpv::w_pdf() const{
  if(!read_only_){
    throw std::logic_error("Trying to write to const tree.");
  }
  if(!c_w_pdf_ && b_w_pdf_){
    b_w_pdf_->GetEntry(entry_);
    c_w_pdf_ = true;
  }
  return w_pdf_;
}

std::vector<int>  const & small_tree_rpv::jets_hflavor() const{
  if(!read_only_){
    throw std::logic_error("Trying to write to const tree.");
  }
  if(!c_jets_hflavor_ && b_jets_hflavor_){
    b_jets_hflavor_->GetEntry(entry_);
    c_jets_hflavor_ = true;
  }
  return jets_hflavor_;
}

std::vector<int>  const & small_tree_rpv::sys_nbm() const{
  if(!read_only_){
    throw std::logic_error("Trying to write to const tree.");
  }
  if(!c_sys_nbm_ && b_sys_nbm_){
    b_sys_nbm_->GetEntry(entry_);
    c_sys_nbm_ = true;
  }
  return sys_nbm_;
}

std::vector<int>  const & small_tree_rpv::sys_njets() const{
  if(!read_only_){
    throw std::logic_error("Trying to write to const tree.");
  }
  if(!c_sys_njets_ && b_sys_njets_){
    b_sys_njets_->GetEntry(entry_);
    c_sys_njets_ = true;
  }
  return sys_njets_;
}

bool  & small_tree_rpv::fromGS(){
  if(read_only_ && !c_fromGS_ && b_fromGS_){
    b_fromGS_->GetEntry(entry_);
    c_fromGS_ = true;
  }
  return fromGS_;
}

bool  & small_tree_rpv::json12p9(){
  if(read_only_ && !c_json12p9_ && b_json12p9_){
    b_json12p9_->GetEntry(entry_);
    c_json12p9_ = true;
  }
  return json12p9_;
}

bool  & small_tree_rpv::json7p65(){
  if(read_only_ && !c_json7p65_ && b_json7p65_){
    b_json7p65_->GetEntry(entry_);
    c_json7p65_ = true;
  }
  return json7p65_;
}

bool  & small_tree_rpv::pass(){
  if(read_only_ && !c_pass_ && b_pass_){
    b_pass_->GetEntry(entry_);
    c_pass_ = true;
  }
  return pass_;
}

bool  & small_tree_rpv::stitch(){
  if(read_only_ && !c_stitch_ && b_stitch_){
    b_stitch_->GetEntry(entry_);
    c_stitch_ = true;
  }
  return stitch_;
}

bool  & small_tree_rpv::stitch_ht(){
  if(read_only_ && !c_stitch_ht_ && b_stitch_ht_){
    b_stitch_ht_->GetEntry(entry_);
    c_stitch_ht_ = true;
  }
  return stitch_ht_;
}

float  & small_tree_rpv::eff_trig(){
  if(read_only_ && !c_eff_trig_ && b_eff_trig_){
    b_eff_trig_->GetEntry(entry_);
    c_eff_trig_ = true;
  }
  return eff_trig_;
}

float  & small_tree_rpv::mj12(){
  if(read_only_ && !c_mj12_ && b_mj12_){
    b_mj12_->GetEntry(entry_);
    c_mj12_ = true;
  }
  return mj12_;
}

float  & small_tree_rpv::w_btag(){
  if(read_only_ && !c_w_btag_ && b_w_btag_){
    b_w_btag_->GetEntry(entry_);
    c_w_btag_ = true;
  }
  return w_btag_;
}

float  & small_tree_rpv::w_btag_gh(){
  if(read_only_ && !c_w_btag_gh_ && b_w_btag_gh_){
    b_w_btag_gh_->GetEntry(entry_);
    c_w_btag_gh_ = true;
  }
  return w_btag_gh_;
}

float  & small_tree_rpv::w_isr(){
  if(read_only_ && !c_w_isr_ && b_w_isr_){
    b_w_isr_->GetEntry(entry_);
    c_w_isr_ = true;
  }
  return w_isr_;
}

float  & small_tree_rpv::w_lep(){
  if(read_only_ && !c_w_lep_ && b_w_lep_){
    b_w_lep_->GetEntry(entry_);
    c_w_lep_ = true;
  }
  return w_lep_;
}

float  & small_tree_rpv::w_pu(){
  if(read_only_ && !c_w_pu_ && b_w_pu_){
    b_w_pu_->GetEntry(entry_);
    c_w_pu_ = true;
  }
  return w_pu_;
}

float  & small_tree_rpv::w_pu_rpv(){
  if(read_only_ && !c_w_pu_rpv_ && b_w_pu_rpv_){
    b_w_pu_rpv_->GetEntry(entry_);
    c_w_pu_rpv_ = true;
  }
  return w_pu_rpv_;
}

float  & small_tree_rpv::w_toppt(){
  if(read_only_ && !c_w_toppt_ && b_w_toppt_){
    b_w_toppt_->GetEntry(entry_);
    c_w_toppt_ = true;
  }
  return w_toppt_;
}

std::vector<bool>  & small_tree_rpv::sys_pass(){
  if(read_only_ && !c_sys_pass_ && b_sys_pass_){
    b_sys_pass_->GetEntry(entry_);
    c_sys_pass_ = true;
  }
  return sys_pass_;
}

std::vector<bool>  & small_tree_rpv::trig(){
  if(read_only_ && !c_trig_ && b_trig_){
    b_trig_->GetEntry(entry_);
    c_trig_ = true;
  }
  return trig_;
}

std::vector<float>  & small_tree_rpv::dr_bb(){
  if(read_only_ && !c_dr_bb_ && b_dr_bb_){
    b_dr_bb_->GetEntry(entry_);
    c_dr_bb_ = true;
  }
  return dr_bb_;
}

std::vector<float>  & small_tree_rpv::sys_bctag(){
  if(read_only_ && !c_sys_bctag_ && b_sys_bctag_){
    b_sys_bctag_->GetEntry(entry_);
    c_sys_bctag_ = true;
  }
  return sys_bctag_;
}

std::vector<float>  & small_tree_rpv::sys_ht(){
  if(read_only_ && !c_sys_ht_ && b_sys_ht_){
    b_sys_ht_->GetEntry(entry_);
    c_sys_ht_ = true;
  }
  return sys_ht_;
}

std::vector<float>  & small_tree_rpv::sys_isr(){
  if(read_only_ && !c_sys_isr_ && b_sys_isr_){
    b_sys_isr_->GetEntry(entry_);
    c_sys_isr_ = true;
  }
  return sys_isr_;
}

std::vector<float>  & small_tree_rpv::sys_lep(){
  if(read_only_ && !c_sys_lep_ && b_sys_lep_){
    b_sys_lep_->GetEntry(entry_);
    c_sys_lep_ = true;
  }
  return sys_lep_;
}

std::vector<float>  & small_tree_rpv::sys_mj12(){
  if(read_only_ && !c_sys_mj12_ && b_sys_mj12_){
    b_sys_mj12_->GetEntry(entry_);
    c_sys_mj12_ = true;
  }
  return sys_mj12_;
}

std::vector<float>  & small_tree_rpv::sys_muf(){
  if(read_only_ && !c_sys_muf_ && b_sys_muf_){
    b_sys_muf_->GetEntry(entry_);
    c_sys_muf_ = true;
  }
  return sys_muf_;
}

std::vector<float>  & small_tree_rpv::sys_mur(){
  if(read_only_ && !c_sys_mur_ && b_sys_mur_){
    b_sys_mur_->GetEntry(entry_);
    c_sys_mur_ = true;
  }
  return sys_mur_;
}

std::vector<float>  & small_tree_rpv::sys_murf(){
  if(read_only_ && !c_sys_murf_ && b_sys_murf_){
    b_sys_murf_->GetEntry(entry_);
    c_sys_murf_ = true;
  }
  return sys_murf_;
}

std::vector<float>  & small_tree_rpv::sys_pu(){
  if(read_only_ && !c_sys_pu_ && b_sys_pu_){
    b_sys_pu_->GetEntry(entry_);
    c_sys_pu_ = true;
  }
  return sys_pu_;
}

std::vector<float>  & small_tree_rpv::sys_udsgtag(){
  if(read_only_ && !c_sys_udsgtag_ && b_sys_udsgtag_){
    b_sys_udsgtag_->GetEntry(entry_);
    c_sys_udsgtag_ = true;
  }
  return sys_udsgtag_;
}

std::vector<float>  & small_tree_rpv::w_pdf(){
  if(read_only_ && !c_w_pdf_ && b_w_pdf_){
    b_w_pdf_->GetEntry(entry_);
    c_w_pdf_ = true;
  }
  return w_pdf_;
}

std::vector<int>  & small_tree_rpv::jets_hflavor(){
  if(read_only_ && !c_jets_hflavor_ && b_jets_hflavor_){
    b_jets_hflavor_->GetEntry(entry_);
    c_jets_hflavor_ = true;
  }
  return jets_hflavor_;
}

std::vector<int>  & small_tree_rpv::sys_nbm(){
  if(read_only_ && !c_sys_nbm_ && b_sys_nbm_){
    b_sys_nbm_->GetEntry(entry_);
    c_sys_nbm_ = true;
  }
  return sys_nbm_;
}

std::vector<int>  & small_tree_rpv::sys_njets(){
  if(read_only_ && !c_sys_njets_ && b_sys_njets_){
    b_sys_njets_->GetEntry(entry_);
    c_sys_njets_ = true;
  }
  return sys_njets_;
}

