/*
 * FUN_10081580 at 10081580
 * undefined FUN_10081580(void)
 * Address ranges: 10081580-100816d3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10081580(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  
  if (*(char *)(param_1 + 0x12f) != '\0') {
    *(undefined1 *)(param_1 + 0x12e) = 1;
    puVar1 = (undefined4 *)(param_1 + 0x5c);
    puVar2 = (undefined4 *)(param_1 + 0x60);
    (*(code *)PTR_FUN_100a106c)(*puVar2,*puVar1,0xffffffff,0);
    (*(code *)__hybrid_CompilerIAT)(*puVar1);
    (*(code *)__hybrid_CompilerIAT)(*puVar2);
    uVar4 = 0;
    do {
      (*(code *)__hybrid_CompilerIAT)(*(undefined4 *)(param_1 + 0x74 + uVar4 * 0x14));
      FUN_10081dc0(*(undefined4 *)(param_1 + 0x70 + uVar4 * 0x14));
      puVar3 = (undefined8 *)(param_1 + 100 + uVar4 * 0x14);
      uVar4 = uVar4 + 1;
      puVar3[1] = 0;
      *puVar3 = 0;
      *(undefined4 *)(puVar3 + 2) = 0;
    } while (uVar4 < 8);
    *puVar2 = 0;
    *puVar1 = 0;
    (*(code *)PTR_FUN_100a101c)(*(undefined4 *)(param_1 + 0x40));
    *(undefined8 *)(param_1 + 0x48) = 0;
    (*(code *)PTR_FUN_100a101c)(*(undefined4 *)(param_1 + 0x44));
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x50) = 0;
    FUN_10081dc0(*(undefined4 *)(param_1 + 0x110));
    *(undefined8 *)(param_1 + 0x10c) = 0;
    *(undefined8 *)(param_1 + 0x104) = 0;
    *(undefined4 *)(param_1 + 0x114) = 0;
    *(char *)(param_1 + 0x12f) = '\0';
  }
  return;
}

