/*
 * FUN_18008c66c at 18008c66c
 * undefined8 * __fastcall FUN_18008c66c(longlong param_1, longlong param_2, longlong param_3)
 * Address ranges: 18008c66c-18008c7bf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_18008c66c(longlong param_1,longlong param_2,longlong param_3)

{
  uint uVar1;
  bool bVar2;
  uint *puVar3;
  undefined8 *puVar4;
  int *piVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  undefined4 *puVar10;
  
  puVar3 = (uint *)(param_2 + -0xa0);
  if (param_2 == 0) {
    puVar3 = (uint *)&DAT_00000040;
  }
  uVar1 = *puVar3;
  puVar4 = (undefined8 *)FUN_1800fbccc(0x290);
  if (puVar4 != (undefined8 *)0x0) {
    piVar5 = (int *)(param_3 + -0x9c);
    puVar10 = (undefined4 *)(param_2 + 0x98);
    puVar3 = (uint *)(param_2 + 0x94);
    puVar7 = (uint *)(param_2 + 0x90);
    puVar9 = (uint *)(param_2 + -0xb8);
    if (param_3 == 0) {
      piVar5 = (int *)&DAT_00000044;
    }
    if (param_2 == 0) {
      puVar10 = (undefined4 *)&DAT_00000178;
      puVar3 = (uint *)&DAT_00000174;
    }
    if (param_2 == 0) {
      puVar7 = (uint *)&DAT_00000170;
    }
    puVar6 = (uint *)(param_3 + -0xb4);
    if (param_3 == 0) {
      puVar6 = (uint *)&DAT_0000002c;
    }
    if (param_2 == 0) {
      puVar9 = (uint *)&DAT_00000028;
    }
    puVar8 = (uint *)(param_2 + -0xbc);
    if (param_2 == 0) {
      puVar8 = (uint *)&DAT_00000024;
    }
    puVar4 = FUN_1800909e4(puVar4,param_1,*puVar8,*puVar9,*puVar6,1,*puVar7,*puVar3,*puVar10,*piVar5
                           ,-(uint)((uVar1 & 8) != 0) & 8 | uVar1 & 1,0);
    if (puVar4 != (undefined8 *)0x0) {
      bVar2 = FUN_18008f6d0((longlong)puVar4);
      if (bVar2) {
        FUN_180092f54((longlong)puVar4);
        return puVar4 + 0x1c;
      }
      FUN_180090bcc(puVar4);
      FUN_1800fbcf0(puVar4);
    }
  }
  return (undefined8 *)0x0;
}

