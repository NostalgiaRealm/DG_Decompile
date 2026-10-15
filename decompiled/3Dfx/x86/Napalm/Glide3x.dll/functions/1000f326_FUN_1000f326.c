/*
 * FUN_1000f326 at 1000f326
 * undefined __fastcall FUN_1000f326(int * param_1)
 * Address ranges: 1000f326-1000f337
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1000f326(int *param_1)

{
  if ((*(byte *)(param_1 + 0xb43) & 2) != 0) {
                    /* WARNING: Could not recover jumptable at 0x1000f331. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x198))();
    return;
  }
  return;
}

