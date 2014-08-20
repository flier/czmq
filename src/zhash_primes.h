/*  =========================================================================
    zhash_primes.h - 5 largest primes less than 2^n for n = 4...63

    Copyright (c) the Contributors as noted in the AUTHORS file.
    This file is part of CZMQ, the high-level C binding for 0MQ:
    http://czmq.zeromq.org.

    This Source Code Form is subject to the terms of the Mozilla Public
    License, v. 2.0. If a copy of the MPL was not distributed with this
    file, You can obtain one at http://mozilla.org/MPL/2.0/.
    =========================================================================
*/

static size_t primes [] = {
    3LLU,
    5LLU,
    7LLU,
    11LLU,
    13LLU, // 2^4
    17LLU,
    19LLU,
    23LLU,
    29LLU,
    31LLU, // 2^5
    43LLU,
    47LLU,
    53LLU,
    59LLU,
    61LLU, // 2^6
    103LLU,
    107LLU,
    109LLU,
    113LLU,
    127LLU, // 2^7
    229LLU,
    233LLU,
    239LLU,
    241LLU,
    251LLU, // 2^8
    487LLU,
    491LLU,
    499LLU,
    503LLU,
    509LLU, // 2^9
    997LLU,
    1009LLU,
    1013LLU,
    1019LLU,
    1021LLU, // 2^10
    2011LLU,
    2017LLU,
    2027LLU,
    2029LLU,
    2039LLU, // 2^11
    4057LLU,
    4073LLU,
    4079LLU,
    4091LLU,
    4093LLU, // 2^12
    8161LLU,
    8167LLU,
    8171LLU,
    8179LLU,
    8191LLU, // 2^13
    16349LLU,
    16361LLU,
    16363LLU,
    16369LLU,
    16381LLU, // 2^14
    32707LLU,
    32713LLU,
    32717LLU,
    32719LLU,
    32749LLU, // 2^15
    65449LLU,
    65479LLU,
    65497LLU,
    65519LLU,
    65521LLU, // 2^16
    131023LLU,
    131041LLU,
    131059LLU,
    131063LLU,
    131071LLU, // 2^17
    262111LLU,
    262121LLU,
    262127LLU,
    262133LLU,
    262139LLU, // 2^18
    524243LLU,
    524257LLU,
    524261LLU,
    524269LLU,
    524287LLU, // 2^19
    1048517LLU,
    1048549LLU,
    1048559LLU,
    1048571LLU,
    1048573LLU, // 2^20
    2097091LLU,
    2097097LLU,
    2097131LLU,
    2097133LLU,
    2097143LLU, // 2^21
    4194247LLU,
    4194271LLU,
    4194277LLU,
    4194287LLU,
    4194301LLU, // 2^22
    8388547LLU,
    8388571LLU,
    8388581LLU,
    8388587LLU,
    8388593LLU, // 2^23
    16777141LLU,
    16777153LLU,
    16777183LLU,
    16777199LLU,
    16777213LLU, // 2^24
    33554341LLU,
    33554347LLU,
    33554371LLU,
    33554383LLU,
    33554393LLU, // 2^25
    67108763LLU,
    67108777LLU,
    67108819LLU,
    67108837LLU,
    67108859LLU, // 2^26
    134217593LLU,
    134217613LLU,
    134217617LLU,
    134217649LLU,
    134217689LLU, // 2^27
    268435331LLU,
    268435337LLU,
    268435361LLU,
    268435367LLU,
    268435399LLU, // 2^28
    536870839LLU,
    536870849LLU,
    536870869LLU,
    536870879LLU,
    536870909LLU, // 2^29
    1073741719LLU,
    1073741723LLU,
    1073741741LLU,
    1073741783LLU,
    1073741789LLU, // 2^30
    2147483563LLU,
    2147483579LLU,
    2147483587LLU,
    2147483629LLU,
    2147483647LLU, // 2^31
    4294967197LLU,
    4294967231LLU,
    4294967279LLU,
    4294967291LLU,
    4294967295LLU, // 2^32
#if __WORDSIZE == 64
    8589934581LLU,
    8589934585LLU,
    8589934587LLU,
    8589934589LLU,
    8589934591LLU, // 2^33
    17179869175LLU,
    17179869177LLU,
    17179869179LLU,
    17179869181LLU,
    17179869183LLU, // 2^34
    34359738359LLU,
    34359738361LLU,
    34359738363LLU,
    34359738365LLU,
    34359738367LLU, // 2^35
    68719476725LLU,
    68719476727LLU,
    68719476729LLU,
    68719476733LLU,
    68719476735LLU, // 2^36
    137438953463LLU,
    137438953465LLU,
    137438953467LLU,
    137438953469LLU,
    137438953471LLU, // 2^37
    274877906935LLU,
    274877906937LLU,
    274877906939LLU,
    274877906941LLU,
    274877906943LLU, // 2^38
    549755813877LLU,
    549755813879LLU,
    549755813883LLU,
    549755813885LLU,
    549755813887LLU, // 2^39
    1099511627767LLU,
    1099511627769LLU,
    1099511627771LLU,
    1099511627773LLU,
    1099511627775LLU, // 2^40
    2199023255543LLU,
    2199023255545LLU,
    2199023255547LLU,
    2199023255549LLU,
    2199023255551LLU, // 2^41
    4398046511095LLU,
    4398046511097LLU,
    4398046511099LLU,
    4398046511101LLU,
    4398046511103LLU, // 2^42
    8796093022199LLU,
    8796093022201LLU,
    8796093022203LLU,
    8796093022205LLU,
    8796093022207LLU, // 2^43
    17592186044407LLU,
    17592186044409LLU,
    17592186044411LLU,
    17592186044413LLU,
    17592186044415LLU, // 2^44
    35184372088823LLU,
    35184372088825LLU,
    35184372088827LLU,
    35184372088829LLU,
    35184372088831LLU, // 2^45
    70368744177655LLU,
    70368744177657LLU,
    70368744177659LLU,
    70368744177661LLU,
    70368744177663LLU, // 2^46
    140737488355319LLU,
    140737488355321LLU,
    140737488355323LLU,
    140737488355325LLU,
    140737488355327LLU, // 2^47
    281474976710647LLU,
    281474976710649LLU,
    281474976710651LLU,
    281474976710653LLU,
    281474976710655LLU, // 2^48
    562949953421303LLU,
    562949953421305LLU,
    562949953421307LLU,
    562949953421309LLU,
    562949953421311LLU, // 2^49
    1125899906842615LLU,
    1125899906842617LLU,
    1125899906842619LLU,
    1125899906842621LLU,
    1125899906842623LLU, // 2^50
    2251799813685239LLU,
    2251799813685241LLU,
    2251799813685243LLU,
    2251799813685245LLU,
    2251799813685247LLU, // 2^51
    4503599627370487LLU,
    4503599627370489LLU,
    4503599627370491LLU,
    4503599627370493LLU,
    4503599627370495LLU, // 2^52
    9007199254740983LLU,
    9007199254740985LLU,
    9007199254740987LLU,
    9007199254740989LLU,
    9007199254740991LLU, // 2^53
    18014398509481975LLU,
    18014398509481977LLU,
    18014398509481979LLU,
    18014398509481981LLU,
    18014398509481983LLU, // 2^54
    36028797018963959LLU,
    36028797018963961LLU,
    36028797018963963LLU,
    36028797018963965LLU,
    36028797018963967LLU, // 2^55
    72057594037927925LLU,
    72057594037927927LLU,
    72057594037927929LLU,
    72057594037927933LLU,
    72057594037927935LLU, // 2^56
    144115188075855863LLU,
    144115188075855865LLU,
    144115188075855867LLU,
    144115188075855869LLU,
    144115188075855871LLU, // 2^57
    288230376151711735LLU,
    288230376151711737LLU,
    288230376151711739LLU,
    288230376151711741LLU,
    288230376151711743LLU, // 2^58
    576460752303423479LLU,
    576460752303423481LLU,
    576460752303423483LLU,
    576460752303423485LLU,
    576460752303423487LLU, // 2^59
    1152921504606846967LLU,
    1152921504606846969LLU,
    1152921504606846971LLU,
    1152921504606846973LLU,
    1152921504606846975LLU, // 2^60
    2305843009213693941LLU,
    2305843009213693943LLU,
    2305843009213693945LLU,
    2305843009213693947LLU,
    2305843009213693949LLU, // 2^61
    4611686018427387895LLU,
    4611686018427387897LLU,
    4611686018427387899LLU,
    4611686018427387901LLU,
    4611686018427387903LLU, // 2^62
    9223372036854775799LLU,
    9223372036854775801LLU,
    9223372036854775803LLU,
    9223372036854775805LLU,
    9223372036854775807LLU, // 2^63
#endif
};