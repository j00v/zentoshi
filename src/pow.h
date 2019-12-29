// Copyright (c) 2009-2010 Satoshi Nakamoto
// Copyright (c) 2009-2018 The Bitcoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef BITCOIN_POW_H
#define BITCOIN_POW_H

#include <consensus/params.h>

#include <stdint.h>

class CBlockHeader;
class CBlockIndex;
class uint256;

unsigned int Lwma3CalculateNextWorkRequired(const CBlockIndex* pindexLast, const Consensus::Params& params, bool fProofOfStake = false);
unsigned int GetNextWorkRequired(const CBlockIndex* pindexLast, const Consensus::Params& params, bool fProofOfStake = false);
bool CheckProofOfWork(uint256 hash, unsigned int nBits, bool fMining, const Consensus::Params& params);

#endif // BITCOIN_POW_H
