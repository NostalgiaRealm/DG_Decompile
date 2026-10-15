/*
 * FUN_1801fd2b0 at 1801fd2b0
 * undefined FUN_1801fd2b0(void)
 * Address ranges: 1801fd2b0-1801fd3bb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1801fd2b0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  *(uint *)(param_2 + 0x28) =
       (uint)(*(longlong *)(param_2 + 0x20) == *(longlong *)(*(longlong *)(param_2 + 0x10) + 0xda8))
  ;
  FUN_1801fec48(param_1,*(undefined4 *)(*(longlong *)(param_2 + 0x10) + 0x10),&DAT_180238620,0,
                0xffffffff,0);
  FUN_1801ff3a8(param_1,*(undefined4 *)(*(longlong *)(param_2 + 0x10) + 0x10),&DAT_1802387c0,0);
  FUN_1801ff6a0(param_1,*(undefined4 *)(*(longlong *)(param_2 + 0x10) + 0x10),&DAT_180238798);
  lVar1 = *(longlong *)(param_2 + 8);
  FUN_1801fff80(param_1,*(undefined4 *)(*(longlong *)(param_2 + 0x10) + 0x10),5,
                *(undefined8 *)(lVar1 + 0x7d8),*(undefined8 *)(lVar1 + 0x7c8),
                *(undefined8 *)(lVar1 + 0x678),0);
  FUN_1801ffce0(param_1,*(undefined4 *)(*(longlong *)(param_2 + 0x10) + 0x10),1,1,
                *(longlong *)(param_2 + 8) + 0x7e0);
  FUN_1801ffe20(param_1,*(undefined4 *)(*(longlong *)(param_2 + 0x10) + 0x10));
  FUN_1801fff08(param_1,*(undefined4 *)(*(longlong *)(param_2 + 0x10) + 0x10),0,0);
  return 1;
}

