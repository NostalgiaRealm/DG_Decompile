/*
 * FUN_18001deb8 at 18001deb8
 * undefined __cdecl FUN_18001deb8(longlong param_1)
 * Address ranges: 18001deb8-18001debb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18001deb8(longlong param_1)

{
  FUN_18001d850(param_1);
  FUN_18001c578(param_1,1);
  *(undefined4 *)(param_1 + 0x2bb4) = *(undefined4 *)(param_1 + 0x2b84);
  *(undefined4 *)(param_1 + 0x2bb8) = *(undefined4 *)(param_1 + 0x2b88);
  *(undefined8 *)(param_1 + 0x2bc0) = *(undefined8 *)(param_1 + 0x2b90);
  *(undefined4 *)(param_1 + 0x2bc8) = *(undefined4 *)(param_1 + 0x2b98);
  *(undefined4 *)(param_1 + 0x2bcc) = *(undefined4 *)(param_1 + 0x2b9c);
  FUN_18001c420(param_1);
  LeaveCriticalSection((LPCRITICAL_SECTION)(*(longlong *)(param_1 + 0x31b0) + 0x620));
  return;
}

