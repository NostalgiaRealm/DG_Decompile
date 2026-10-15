/*
 * FUN_100a9270 at 100a9270
 * undefined FUN_100a9270(void)
 * Address ranges: 100a9270-100a93b3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_100a9270(undefined4 param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  bool bVar7;
  int iVar8;
  ulonglong uVar9;
  
  iVar8 = FUN_101321c0(0x184);
  if (iVar8 != 0) {
    bVar7 = param_2 != 0;
    puVar1 = (undefined4 *)&DAT_000000e4;
    if (bVar7) {
      puVar1 = (undefined4 *)(param_2 + 0x5c);
    }
    puVar2 = (undefined4 *)&DAT_000000e0;
    if (bVar7) {
      puVar2 = (undefined4 *)(param_2 + 0x58);
    }
    puVar3 = (undefined4 *)&DAT_000000dc;
    if (bVar7) {
      puVar3 = (undefined4 *)(param_2 + 0x54);
    }
    puVar4 = (undefined4 *)&DAT_0000001c;
    if (param_3 != 0) {
      puVar4 = (undefined4 *)(param_3 + -0x6c);
    }
    puVar5 = (undefined4 *)&DAT_00000018;
    if (param_2 != 0) {
      puVar5 = (undefined4 *)(param_2 + -0x70);
    }
    puVar6 = (undefined4 *)&DAT_00000014;
    if (param_2 != 0) {
      puVar6 = (undefined4 *)(param_2 + -0x74);
    }
    iVar8 = FUN_100aebc8(iVar8,param_1,*puVar6,*puVar5,*puVar4,1,*puVar3,*puVar2,*puVar1);
    if (iVar8 != 0) {
      uVar9 = FUN_100ad2d0(iVar8);
      if ((uVar9 & 1) != 0) {
        FUN_100b14f0(iVar8);
        return iVar8 + 0x88;
      }
      FUN_100aedb0(iVar8);
      FUN_10132260(iVar8,0x184);
    }
  }
  return 0;
}

