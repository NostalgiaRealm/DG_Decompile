/*
 * FUN_1001b7e0 at 1001b7e0
 * undefined FUN_1001b7e0(void)
 * Address ranges: 1001b7e0-1001b923
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1001b7e0(undefined4 param_1,int param_2,int param_3)

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
  
  iVar8 = FUN_100913c0(0x1f0);
  if (iVar8 != 0) {
    bVar7 = param_2 != 0;
    puVar1 = (undefined4 *)&DAT_00000138;
    if (bVar7) {
      puVar1 = (undefined4 *)(param_2 + 0x78);
    }
    puVar2 = (undefined4 *)&DAT_00000134;
    if (bVar7) {
      puVar2 = (undefined4 *)(param_2 + 0x74);
    }
    puVar3 = (undefined4 *)&DAT_00000130;
    if (bVar7) {
      puVar3 = (undefined4 *)(param_2 + 0x70);
    }
    puVar4 = (undefined4 *)&DAT_0000001c;
    if (param_3 != 0) {
      puVar4 = (undefined4 *)(param_3 + -0xa4);
    }
    puVar5 = (undefined4 *)&DAT_00000018;
    if (param_2 != 0) {
      puVar5 = (undefined4 *)(param_2 + -0xa8);
    }
    puVar6 = (undefined4 *)&DAT_00000014;
    if (param_2 != 0) {
      puVar6 = (undefined4 *)(param_2 + -0xac);
    }
    iVar8 = FUN_10025ae8(iVar8,param_1,*puVar6,*puVar5,*puVar4,1,*puVar3,*puVar2,*puVar1);
    if (iVar8 != 0) {
      uVar9 = FUN_10024670(iVar8);
      if ((uVar9 & 1) != 0) {
        FUN_10028830(iVar8);
        return iVar8 + 0xc0;
      }
      FUN_10025ce0(iVar8);
      FUN_10091460(iVar8,0x1f0);
    }
  }
  return 0;
}

