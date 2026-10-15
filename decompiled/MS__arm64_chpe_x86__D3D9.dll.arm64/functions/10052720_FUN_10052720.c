/*
 * FUN_10052720 at 10052720
 * undefined FUN_10052720(void)
 * Address ranges: 10052720-100527eb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_10052720(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)FUN_101321c0(0x40);
  if (puVar2 != (undefined4 *)0x0) {
    uVar1 = *(undefined4 *)(param_1 + 0xcc);
    *puVar2 = &PTR_FUN_1015ecc0;
    puVar2[1] = uVar1;
    *(undefined8 *)(puVar2 + 2) = 0;
    *(undefined8 *)(puVar2 + 4) = 0;
    *(undefined8 *)(puVar2 + 6) = 0;
    *(undefined8 *)(puVar2 + 8) = 0;
    puVar2[0xd] = 0;
    puVar2[0xe] = 0;
    *(undefined1 *)(puVar2 + 0xf) = 0;
    *(undefined8 *)(puVar2 + 10) = 0;
    puVar2[0xc] = 0;
    puVar2[2] = param_2;
    if (param_2 - 8U < 5) {
      return puVar2;
    }
    *puVar2 = &PTR_FUN_1015eaf8;
    FUN_10132260(puVar2,0x40);
  }
  return (undefined4 *)0x0;
}

