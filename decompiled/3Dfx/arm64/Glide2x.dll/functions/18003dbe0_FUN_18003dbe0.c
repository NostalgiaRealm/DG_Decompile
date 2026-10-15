/*
 * FUN_18003dbe0 at 18003dbe0
 * uint __cdecl FUN_18003dbe0(int * param_1, uint param_2, uint param_3, uint param_4, uint param_5, uint param_6, byte param_7, longlong * param_8)
 * Address ranges: 18003dbe0-18003ddf3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_18003dbe0(int *param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6,
                  byte param_7,longlong *param_8)

{
  uint *puVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  
  if ((param_2 >> 0xe & 1) != 0) {
    uVar2 = param_3 & 0x10ff;
    if ((param_3 & 0xf0) != 0x80 && (param_3 & 0xf0) != 0xf0 ||
        ((param_6 & 0x10ff) == uVar2 || ((param_4 & 0x10ff) == uVar2 || (param_5 & 0x10ff) == uVar2)
        )) {
      param_3 = FUN_18003da90((longlong)param_1,param_4,param_5,param_6,0,param_7,0);
    }
    piVar3 = (int *)FUN_18003d4b8((longlong)param_1,param_3,1);
    FUN_18003d598(piVar3,0,param_2,0xff,0,0);
    puVar1 = (uint *)(param_1 + 0x5f);
    puVar1[0] = 5;
    puVar1[1] = 0x4006;
    iVar4 = 0x3f008081;
    if ((param_2 & 0x2000) != 0) {
      iVar4 = 0x43000000;
    }
    param_1[99] = iVar4;
    param_1[100] = iVar4;
    param_1[0x61] = iVar4;
    param_1[0x62] = iVar4;
    uVar2 = 0x31;
    if ((param_2 & 0xf00) != 0x100) {
      uVar2 = 0x1d;
    }
    FUN_180056e08(param_8,(param_1[0x4f] + param_1[0x57]) * 0x1000000 + 0x6000000U & 0x7f000000 |
                          uVar2,(uint *)(param_1 + 0x4f),(uint *)(param_1 + 0x57),puVar1,(uint *)0x0
                 );
    piVar3 = (int *)FUN_18003d4b8((longlong)param_1,param_3,param_7);
    FUN_18003d598(piVar3,0,param_3,0,0,0);
    uVar2 = FUN_18003dba8((longlong)param_1,param_3,0xa4);
    FUN_18003d598(param_1,1,0x50,(byte)uVar2,0,0);
    uVar2 = FUN_18003dba8((longlong)param_1,param_3,0xa4);
    FUN_18003d598(param_1,2,0x40,(byte)uVar2,0,0);
    FUN_180056e08(param_8,(param_1[0x67] + *puVar1 + param_1[0x57] + param_1[0x4f]) * 0x1000000 +
                          0x1000000 & 0x7f000000 | 0x37,(uint *)(param_1 + 0x4f),
                  (uint *)(param_1 + 0x57),puVar1,(uint *)(param_1 + 0x67));
    param_2 = param_3 | 0x2000;
  }
  return param_2;
}

