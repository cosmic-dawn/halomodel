/*
 *    xray.h
 *    halomodel library
 *    Jean Coupon 2015-2017
 */

#ifndef XRAY_H
#define XRAY_H

#include "utils.h"
#include "hod.h"
#include "abundance.h"
#include "cosmo.h"

void SigmaIx(const Model *model, double *theta, int N, double Mh, double c, double z, int obs_type, double *result);
double intForIx(double logz, void *p);

void SigmaIxAll(const Model *model, double *theta, int N, double Mh, double c, double z, double *result);

void Ix1hc(const Model *model, double *r, int N, double Mh, double c, double z, double *result);
double intForIx1hc(double logMh, void *p);

void Ix1hs(const Model *model, double *r, int N, double Mh, double c, double z, double *result);
double intForIx1hs(double k, void *p);
double PIx1hs(const Model *model, double k, const double Mh, const double c, const double z);
double intForPIx1hs(double logMh, void *p);
double NormIx(const Model *model, double Mh,  double c, double z);
double intForNormIx(double logr, void *p);

double uIx(const Model *model, double k, double Mh, double c, double z);
double intForUIx(double r, void *p);

void IxXB(const Model *model, double *r, int N, double Mh, double c, double z, double *result);

void IxTwohalo(const Model *model, double *r, int N, double Mh, double c, double z, double *result);
double intForIxTwohalo(double k, void *p);
double P_Ix_twohalo(double k, void *p);
double intForP_twohalo_Ix(double logMh, void *p);

double ix(const Model *model, double r, double Mh, double c, double z);
double MhToTGas(const Model *model, double Mh, double z);
double MhToZGas(const Model *model, double Mh, double z);

//double TGasToMh(const Model *model, double TGas, double z);

double const_Mgas_como(const Model *model, double z);

double MGas(const Model *model, double r, double Mh, double c, double z);
double intForMGas(double logr, void *p);
double LambdaBolo(double TGas, double ZGas);
double Lambda0p5_2p0(double TGas, double ZGas);

double LxToCR(const Model *model, double z, double TGas, double ZGas);
//double CRToLx(const Model *model, double z, double TGas, double ZGas);

double nGas(const Model *model, double r, double Mh, double c, double z);
double betaModel(double r, double n0, double beta, double rc);

double inter_gas_log10n0(const Model *model, double log10Mh);
double inter_gas_log10beta(const Model *model, double log10Mh);
double inter_gas_log10rc(const Model *model, double log10Mh);

void copyModelXRay(const Model *from, Model *to);
int changeModelXRay(const Model *before, const Model *after);

#endif


#if 0


void Ix(const Model *model, double *R, int N, double z, int obs_type, double *result);


double intForIx(double logz, void *p);

void IxXB(double *r, int N, const Model *model, double *result);


void Ix1hs(double *r, int N, const Model *model, double *result);
double intForIx1hs(double k, void *p);
double PIx1hs(double k, const Model *model);
double intForPIx1hs(double logMh, void *p);

void Ix1hc(double *r, int N, const Model *model, double *result);
double intForIx1hc(double logMh, void *p);

void uIx3D(double *k, int N, const Model *model, double log10Mh,  double *result);
double intForUIx3D(double r, void *p);
double Ix3D(double r, double log10Mh,  const Model *model);

double nGas2(double r, double log10Mh, const Model *model);

double inter_gas_log10n0(const Model *model, double log10Mh);
double inter_gas_log10beta(const Model *model, double log10Mh);
double inter_gas_log10r_c(const Model *model, double log10Mh);

double NormIx3D(const Model *model, double log10Mh, double rmax);
double intForNormIx3D(double logr, void *p);

double intForMGas(double logr, void *p);
double MGas( const Model *model, double log10Mh, double rmax);


double betaModel(double r, double n0, double beta, double r_c);
double betaModelSqProj(double r, double n0, double beta, double r_c);


double bias_log10Mh(const Model *model, double log10Lx);
double int_for_PLxGivenMh(double logMh, void *p);
double int_for_PLxGivenMh_norm(double logMh, void *p);
double normal(double x, double mu, double sigma);


#endif
