/*
 * FUN_180096fe4 at 180096fe4
 * undefined8 * __fastcall FUN_180096fe4(longlong param_1, longlong param_2, longlong param_3)
 * Address ranges: 180096fe4-180097137
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_180096fe4(longlong param_1,longlong param_2,longlong param_3)

{
  uint uVar1;
  uint *puVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined8 uVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  undefined4 *puVar10;
  
  puVar2 = (uint *)(param_2 + -0xc0);
  if (param_2 == 0) {
    puVar2 = (uint *)&DAT_00000040;
  }
  uVar1 = *puVar2;
  puVar3 = (undefined8 *)FUN_1800fbccc(0x290);
  if (puVar3 != (undefined8 *)0x0) {
    piVar4 = (int *)(param_3 + -0xbc);
    puVar10 = (undefined4 *)(param_2 + 0xa0);
    puVar2 = (uint *)(param_2 + 0x9c);
    puVar7 = (uint *)(param_2 + 0x98);
    puVar9 = (uint *)(param_2 + -0xd8);
    if (param_3 == 0) {
      piVar4 = (int *)&DAT_00000044;
    }
    if (param_2 == 0) {
      puVar10 = (undefined4 *)&DAT_000001a0;
      puVar2 = (uint *)&DAT_0000019c;
    }
    if (param_2 == 0) {
      puVar7 = (uint *)&DAT_00000198;
    }
    puVar6 = (uint *)(param_3 + -0xd4);
    if (param_3 == 0) {
      puVar6 = (uint *)&DAT_0000002c;
    }
    if (param_2 == 0) {
      puVar9 = (uint *)&DAT_00000028;
    }
    puVar8 = (uint *)(param_2 + -0xdc);
    if (param_2 == 0) {
      puVar8 = (uint *)&DAT_00000024;
    }
    puVar3 = FUN_18009f038(puVar3,param_1,*puVar8,*puVar9,*puVar6,1,*puVar7,*puVar2,*puVar10,*piVar4
                           ,-(uint)((uVar1 & 8) != 0) & 8 | uVar1 & 1,0);
    if (puVar3 != (undefined8 *)0x0) {
      uVar5 = FUN_18009e3e4((longlong)puVar3);
      if ((char)uVar5 != '\0') {
        FUN_1800a2030((longlong)puVar3);
        return puVar3 + 0x20;
      }
      FUN_18009f238(puVar3);
      FUN_1800fbcf0(puVar3);
    }
  }
  return (undefined8 *)0x0;
}

