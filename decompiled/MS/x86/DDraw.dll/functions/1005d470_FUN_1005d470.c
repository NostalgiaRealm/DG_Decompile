/*
 * FUN_1005d470 at 1005d470
 * undefined __fastcall FUN_1005d470(undefined4 * param_1)
 * Address ranges: 1005d470-1005d4a4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1005d470(undefined4 *param_1)

{
  int iVar1;
  
  if (param_1 != (undefined4 *)0x0) {
    LOCK();
    iVar1 = param_1[0x12] + -1;
    param_1[0x12] = iVar1;
    UNLOCK();
    if (iVar1 == 0) {
      FUN_1005dcd5(param_1,'\0');
      FUN_1005d1ab((int)param_1);
      FUN_1005d3a8(param_1);
      FUN_10060be1(param_1);
    }
  }
  return;
}

