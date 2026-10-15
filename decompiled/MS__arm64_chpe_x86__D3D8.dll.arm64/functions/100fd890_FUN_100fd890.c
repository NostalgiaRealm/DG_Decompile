/*
 * FUN_100fd890 at 100fd890
 * undefined FUN_100fd890(void)
 * Address ranges: 100fd890-100fd9e3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100fd890(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  
  if (*(char *)(param_1 + 0x12f) != '\0') {
    *(undefined1 *)(param_1 + 0x12e) = 1;
    puVar1 = (undefined4 *)(param_1 + 0x5c);
    puVar2 = (undefined4 *)(param_1 + 0x60);
    (*(code *)PTR_FUN_1013410c)(*puVar2,*puVar1,0xffffffff,0);
    (*(code *)PTR_FUN_10134044)(*puVar1);
    (*(code *)PTR_FUN_10134044)(*puVar2);
    uVar4 = 0;
    do {
      (*(code *)PTR_FUN_10134044)(*(undefined4 *)(param_1 + 0x74 + uVar4 * 0x14));
      FUN_100fed00(*(undefined4 *)(param_1 + 0x70 + uVar4 * 0x14));
      puVar3 = (undefined8 *)(param_1 + 100 + uVar4 * 0x14);
      uVar4 = uVar4 + 1;
      puVar3[1] = 0;
      *puVar3 = 0;
      *(undefined4 *)(puVar3 + 2) = 0;
    } while (uVar4 < 8);
    *puVar2 = 0;
    *puVar1 = 0;
    (*(code *)PTR_FUN_10134078)(*(undefined4 *)(param_1 + 0x40));
    *(undefined8 *)(param_1 + 0x48) = 0;
    (*(code *)PTR_FUN_10134078)(*(undefined4 *)(param_1 + 0x44));
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x50) = 0;
    FUN_100fed00(*(undefined4 *)(param_1 + 0x110));
    *(undefined8 *)(param_1 + 0x10c) = 0;
    *(undefined8 *)(param_1 + 0x104) = 0;
    *(undefined4 *)(param_1 + 0x114) = 0;
    *(char *)(param_1 + 0x12f) = '\0';
  }
  return;
}

