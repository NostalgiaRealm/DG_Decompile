/*
 * FUN_140012d90 at 140012d90
 * undefined * __fastcall FUN_140012d90(int param_1)
 * Address ranges: 140012d90-140012e71
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_140012d90(int param_1)

{
  undefined *puVar1;
  
  if ((DAT_14002efa0 & 1) == 0) {
    DAT_14002efa0 = DAT_14002efa0 | 1;
    FUN_140011f20((undefined8 *)&DAT_14002eb10);
    _DAT_14002eb10 = &PTR_FUN_140028e60;
    DAT_14002ef90 = 0;
    _DAT_14002ef98 = 0xb000;
    DAT_14002ef88 = 0;
    FUN_140024c60(FUN_1400254a0);
  }
  if ((DAT_14002efa0 & 2) == 0) {
    DAT_14002efa0 = DAT_14002efa0 | 2;
    FUN_140011f20((undefined8 *)&DAT_14002e680);
    _DAT_14002e680 = &PTR_FUN_140028e60;
    DAT_14002eb00 = 0;
    _DAT_14002eb08 = 0xc000;
    DAT_14002eaf8 = 0;
    FUN_140024c60(FUN_140025430);
  }
  puVar1 = (undefined *)0x0;
  if (param_1 == 0x110) {
    puVar1 = &DAT_14002eb10;
  }
  else if (param_1 == 0x120) {
    return &DAT_14002e680;
  }
  return puVar1;
}

