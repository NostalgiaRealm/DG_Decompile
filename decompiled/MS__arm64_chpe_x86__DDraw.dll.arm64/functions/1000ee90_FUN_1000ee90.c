/*
 * FUN_1000ee90 at 1000ee90
 * undefined FUN_1000ee90(void)
 * Address ranges: 1000ee90-1000efd3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1000ee90(undefined4 param_1,int param_2,int param_3)

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
  
  iVar8 = FUN_100913c0(0x184);
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
    iVar8 = FUN_10014428(iVar8,param_1,*puVar6,*puVar5,*puVar4,1,*puVar3,*puVar2,*puVar1);
    if (iVar8 != 0) {
      uVar9 = FUN_10012b30(iVar8);
      if ((uVar9 & 1) != 0) {
        FUN_10016cd0(iVar8);
        return iVar8 + 0x88;
      }
      FUN_10014610(iVar8);
      FUN_10091460(iVar8,0x184);
    }
  }
  return 0;
}

