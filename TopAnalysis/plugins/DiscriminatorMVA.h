#ifndef DiscriminatorMVA_h
#define DiscriminatorMVA_h

#include "TMVA/Reader.h"

class DiscriminatorMVA
{
  public:
    DiscriminatorMVA(std::string weights);
    ~DiscriminatorMVA();
    float eval(int nJets,float ht,float htBtag,float jetPt0,float jetPt1,float jetPt2,float jetPt3,float jetPt4,float jetPt5,float mbbMin,float dRbbMin,float qglAve,float qglMin,float qglMedian,float sphericity,float aplanarity,float H0,float H1,float H2,float H3);
    
  private:
    std::string weights_;
    TMVA::Reader *reader_;
    float var_[20];
};
#endif
