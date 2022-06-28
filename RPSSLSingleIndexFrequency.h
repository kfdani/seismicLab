
#include "IrpsSLFrequencyDistribution.h"


class CRPSSLSingleIndexFrequency : public IrpsSLFrequencyDistribution
{
	void ComputeFrequenciesVectorF(const CRPSSeismicLabsimuData &Data, vec &dFrequencyVector, QStringList &strInformation);

	void ComputeFrequenciesMatrixFP(const CRPSSeismicLabsimuData &Data, mat &dFrequencyMatrix, QStringList &strInformation);

	bool OnInitialSetting(const CRPSSeismicLabsimuData &Data, QStringList &strInformation);

};

