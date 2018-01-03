// small_tree_rpv: rpv version of small_tree to handle reduce tree ntuples
// File generated with generate_small_tree.exe

#ifndef H_SMALL_TREE_RPV
#define H_SMALL_TREE_RPV

#include <vector>
#include <string>

#include "TTree.h"
#include "TChain.h"

#include "small_tree.hpp"

class small_tree_rpv : public small_tree{
public:
  small_tree_rpv(); // Constructor to create tree
  small_tree_rpv(const std::string &filename); // Constructor to read tree

  virtual void GetEntry(const long entry);

  virtual void Fill();

  virtual std::string Type() const;

  virtual ~small_tree_rpv();

  virtual bool  const & fromGS() const;
  virtual bool  & fromGS();
  virtual bool  const & json12p9() const;
  virtual bool  & json12p9();
  virtual bool  const & json7p65() const;
  virtual bool  & json7p65();
  virtual bool  const & pass() const;
  virtual bool  & pass();
  virtual bool  const & stitch() const;
  virtual bool  & stitch();
  virtual bool  const & stitch_ht() const;
  virtual bool  & stitch_ht();
  virtual float  const & eff_trig() const;
  virtual float  & eff_trig();
  virtual float  const & mj12() const;
  virtual float  & mj12();
  virtual float  const & w_btag() const;
  virtual float  & w_btag();
  virtual float  const & w_btag_gh() const;
  virtual float  & w_btag_gh();
  virtual float  const & w_isr() const;
  virtual float  & w_isr();
  virtual float  const & w_lep() const;
  virtual float  & w_lep();
  virtual float  const & w_pu() const;
  virtual float  & w_pu();
  virtual float  const & w_pu_rpv() const;
  virtual float  & w_pu_rpv();
  virtual float  const & w_toppt() const;
  virtual float  & w_toppt();
  virtual std::vector<bool>  const & sys_pass() const;
  virtual std::vector<bool>  & sys_pass();
  virtual std::vector<bool>  const & trig() const;
  virtual std::vector<bool>  & trig();
  virtual std::vector<float>  const & dr_bb() const;
  virtual std::vector<float>  & dr_bb();
  virtual std::vector<float>  const & sys_bctag() const;
  virtual std::vector<float>  & sys_bctag();
  virtual std::vector<float>  const & sys_ht() const;
  virtual std::vector<float>  & sys_ht();
  virtual std::vector<float>  const & sys_isr() const;
  virtual std::vector<float>  & sys_isr();
  virtual std::vector<float>  const & sys_lep() const;
  virtual std::vector<float>  & sys_lep();
  virtual std::vector<float>  const & sys_mj12() const;
  virtual std::vector<float>  & sys_mj12();
  virtual std::vector<float>  const & sys_muf() const;
  virtual std::vector<float>  & sys_muf();
  virtual std::vector<float>  const & sys_mur() const;
  virtual std::vector<float>  & sys_mur();
  virtual std::vector<float>  const & sys_murf() const;
  virtual std::vector<float>  & sys_murf();
  virtual std::vector<float>  const & sys_pu() const;
  virtual std::vector<float>  & sys_pu();
  virtual std::vector<float>  const & sys_udsgtag() const;
  virtual std::vector<float>  & sys_udsgtag();
  virtual std::vector<float>  const & w_pdf() const;
  virtual std::vector<float>  & w_pdf();
  virtual std::vector<int>  const & jets_hflavor() const;
  virtual std::vector<int>  & jets_hflavor();
  virtual std::vector<int>  const & sys_nbm() const;
  virtual std::vector<int>  & sys_nbm();
  virtual std::vector<int>  const & sys_njets() const;
  virtual std::vector<int>  & sys_njets();

private:
  bool  fromGS_;
  TBranch *b_fromGS_;
  mutable bool c_fromGS_;
  bool  json12p9_;
  TBranch *b_json12p9_;
  mutable bool c_json12p9_;
  bool  json7p65_;
  TBranch *b_json7p65_;
  mutable bool c_json7p65_;
  bool  pass_;
  TBranch *b_pass_;
  mutable bool c_pass_;
  bool  stitch_;
  TBranch *b_stitch_;
  mutable bool c_stitch_;
  bool  stitch_ht_;
  TBranch *b_stitch_ht_;
  mutable bool c_stitch_ht_;
  float  eff_trig_;
  TBranch *b_eff_trig_;
  mutable bool c_eff_trig_;
  float  mj12_;
  TBranch *b_mj12_;
  mutable bool c_mj12_;
  float  w_btag_;
  TBranch *b_w_btag_;
  mutable bool c_w_btag_;
  float  w_btag_gh_;
  TBranch *b_w_btag_gh_;
  mutable bool c_w_btag_gh_;
  float  w_isr_;
  TBranch *b_w_isr_;
  mutable bool c_w_isr_;
  float  w_lep_;
  TBranch *b_w_lep_;
  mutable bool c_w_lep_;
  float  w_pu_;
  TBranch *b_w_pu_;
  mutable bool c_w_pu_;
  float  w_pu_rpv_;
  TBranch *b_w_pu_rpv_;
  mutable bool c_w_pu_rpv_;
  float  w_toppt_;
  TBranch *b_w_toppt_;
  mutable bool c_w_toppt_;
  std::vector<bool>  sys_pass_;
  std::vector<bool>  *p_sys_pass_;
  TBranch *b_sys_pass_;
  mutable bool c_sys_pass_;
  std::vector<bool>  trig_;
  std::vector<bool>  *p_trig_;
  TBranch *b_trig_;
  mutable bool c_trig_;
  std::vector<float>  dr_bb_;
  std::vector<float>  *p_dr_bb_;
  TBranch *b_dr_bb_;
  mutable bool c_dr_bb_;
  std::vector<float>  sys_bctag_;
  std::vector<float>  *p_sys_bctag_;
  TBranch *b_sys_bctag_;
  mutable bool c_sys_bctag_;
  std::vector<float>  sys_ht_;
  std::vector<float>  *p_sys_ht_;
  TBranch *b_sys_ht_;
  mutable bool c_sys_ht_;
  std::vector<float>  sys_isr_;
  std::vector<float>  *p_sys_isr_;
  TBranch *b_sys_isr_;
  mutable bool c_sys_isr_;
  std::vector<float>  sys_lep_;
  std::vector<float>  *p_sys_lep_;
  TBranch *b_sys_lep_;
  mutable bool c_sys_lep_;
  std::vector<float>  sys_mj12_;
  std::vector<float>  *p_sys_mj12_;
  TBranch *b_sys_mj12_;
  mutable bool c_sys_mj12_;
  std::vector<float>  sys_muf_;
  std::vector<float>  *p_sys_muf_;
  TBranch *b_sys_muf_;
  mutable bool c_sys_muf_;
  std::vector<float>  sys_mur_;
  std::vector<float>  *p_sys_mur_;
  TBranch *b_sys_mur_;
  mutable bool c_sys_mur_;
  std::vector<float>  sys_murf_;
  std::vector<float>  *p_sys_murf_;
  TBranch *b_sys_murf_;
  mutable bool c_sys_murf_;
  std::vector<float>  sys_pu_;
  std::vector<float>  *p_sys_pu_;
  TBranch *b_sys_pu_;
  mutable bool c_sys_pu_;
  std::vector<float>  sys_udsgtag_;
  std::vector<float>  *p_sys_udsgtag_;
  TBranch *b_sys_udsgtag_;
  mutable bool c_sys_udsgtag_;
  std::vector<float>  w_pdf_;
  std::vector<float>  *p_w_pdf_;
  TBranch *b_w_pdf_;
  mutable bool c_w_pdf_;
  std::vector<int>  jets_hflavor_;
  std::vector<int>  *p_jets_hflavor_;
  TBranch *b_jets_hflavor_;
  mutable bool c_jets_hflavor_;
  std::vector<int>  sys_nbm_;
  std::vector<int>  *p_sys_nbm_;
  TBranch *b_sys_nbm_;
  mutable bool c_sys_nbm_;
  std::vector<int>  sys_njets_;
  std::vector<int>  *p_sys_njets_;
  TBranch *b_sys_njets_;
  mutable bool c_sys_njets_;
};

#endif
