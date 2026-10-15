/*
 * FUN_18005f230 at 18005f230
 * undefined __fastcall FUN_18005f230(longlong * param_1, undefined4 * param_2)
 * Address ranges: 18005f230-18005f2eb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18005f230(longlong *param_1,undefined4 *param_2)

{
  (**(code **)(*param_1 + 0x1d8))(param_1,0);
  *(undefined4 *)(param_1 + 0xdee) = *param_2;
  *(undefined4 *)((longlong)param_1 + 0x6f74) = param_2[1];
  *(undefined4 *)(param_1 + 0xdef) = param_2[2];
  *(undefined4 *)((longlong)param_1 + 0x6f7c) = param_2[3];
  *(undefined4 *)(param_1 + 0xdf2) = param_2[8];
  *(undefined4 *)((longlong)param_1 + 0x6f94) = param_2[9];
  *(undefined4 *)(param_1 + 0xdf3) = param_2[10];
  *(undefined4 *)((longlong)param_1 + 0x6f9c) = param_2[0xb];
  *(undefined4 *)(param_1 + 0xdf0) = param_2[4];
  *(undefined4 *)((longlong)param_1 + 0x6f84) = param_2[5];
  *(undefined4 *)(param_1 + 0xdf1) = param_2[6];
  *(undefined4 *)((longlong)param_1 + 0x6f8c) = param_2[7];
  *(undefined4 *)(param_1 + 0xdf4) = param_2[0xc];
  *(undefined4 *)((longlong)param_1 + 0x6fa4) = param_2[0xd];
  *(undefined4 *)(param_1 + 0xdf5) = param_2[0xe];
  *(undefined4 *)((longlong)param_1 + 0x6fac) = param_2[0x10];
  *(undefined1 *)((longlong)param_1 + 0xf691) = 1;
  return;
}

