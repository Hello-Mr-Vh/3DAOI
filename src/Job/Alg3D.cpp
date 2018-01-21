#include "Alg3D.hpp"

using namespace Job;
using namespace SSDK;

//>>>----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// constructor & destructor

Alg3D::Alg3D()
{
    try
    {
        this->m_algType = AlgType::ALG3D;
    }
    CATCH_AND_RETHROW_EXCEPTION_WITH_OBJ("Constructor error!");
}

Alg3D::~Alg3D()
{
    try
    {

    }
    CATCH_AND_RETHROW_EXCEPTION_WITH_OBJ("Destructor error!");
}

//<<<----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------


//>>>----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// member function

bool Alg3D::inspect()
{
    try
    {
        double NGProbability = 0.4;
        return (NumRandom::randomBool(NGProbability));
    }
    CATCH_AND_RETHROW_EXCEPTION_WITH_OBJ("3D inspect error!");
}

//<<<----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
