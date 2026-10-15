/*
 * FUN_1003675e at 1003675e
 * undefined __stdcall FUN_1003675e(uint param_1, undefined4 param_2, undefined4 param_3, undefined4 * param_4, undefined4 * param_5)
 * Address ranges: 1003675e-1003684e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1003675e(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
                 undefined4 *param_5)

{
  undefined4 *puVar1;
  LPVOID pvVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  
  if (DAT_100707bc == DAT_100707b8) {
    if (DAT_100707bc == 0) {
      uVar5 = 0x10;
    }
    else {
      uVar5 = DAT_100707bc * 2;
    }
    pvVar2 = (LPVOID)FUN_10060bfe(uVar5 << 4);
    if (pvVar2 != (LPVOID)0x0) {
      uVar3 = 0;
      if (DAT_100707b8 != 0) {
        do {
          uVar4 = uVar3 + 1;
          puVar6 = (undefined4 *)((int)DAT_100707b4 + uVar3 * 0x10);
          puVar1 = (undefined4 *)((int)pvVar2 + uVar3 * 0x10);
          *puVar1 = *puVar6;
          puVar1[1] = puVar6[1];
          puVar1[2] = puVar6[2];
          puVar1[3] = puVar6[3];
          uVar3 = uVar4;
        } while (uVar4 < DAT_100707b8);
      }
      thunk_FUN_10060be1(DAT_100707b0);
      DAT_100707b0 = pvVar2;
      DAT_100707b4 = pvVar2;
      DAT_100707bc = uVar5;
    }
  }
  uVar5 = DAT_100707b8;
  if (DAT_100707bc != DAT_100707b8) {
    for (; param_1 < uVar5; uVar5 = uVar5 - 1) {
      puVar6 = (undefined4 *)(uVar5 * 0x10 + (int)DAT_100707b4);
      *puVar6 = puVar6[-4];
      puVar6[1] = puVar6[-3];
      puVar6[2] = puVar6[-2];
      puVar6[3] = puVar6[-1];
    }
    DAT_100707b8 = DAT_100707b8 + 1;
    *(undefined4 *)((int)DAT_100707b4 + param_1 * 0x10 + 8) = *param_4;
    *(undefined4 *)((int)DAT_100707b4 + param_1 * 0x10 + 0xc) = *param_5;
    pvVar2 = DAT_100707b4;
    *(undefined4 *)((int)DAT_100707b4 + param_1 * 0x10) = param_2;
    *(undefined4 *)((int)pvVar2 + param_1 * 0x10 + 4) = param_3;
  }
  return;
}

