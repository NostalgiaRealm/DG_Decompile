/*
 * FUN_1800e0358 at 1800e0358
 * undefined FUN_1800e0358(void)
 * Address ranges: 1800e0358-1800e046b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1800e0358(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  *(uint *)(param_2 + 0x28) =
       (uint)(*(longlong *)(param_2 + 0x20) == *(longlong *)(*(longlong *)(param_2 + 0x10) + 0xda8))
  ;
  FUN_1800e1940(param_1,*(undefined4 *)(*(longlong *)(param_2 + 0x10) + 0x10),&DAT_180232c60,0,
                0xffffffff,0);
  FUN_1800e1fe8(param_1,*(undefined4 *)(*(longlong *)(param_2 + 0x10) + 0x10),&DAT_180232e00,0);
  FUN_1800e22c0(param_1,*(undefined4 *)(*(longlong *)(param_2 + 0x10) + 0x10),&DAT_180232dd8);
  lVar1 = *(longlong *)(param_2 + 8);
  FUN_1800e2ac8(param_1,*(undefined4 *)(*(longlong *)(param_2 + 0x10) + 0x10),5,
                *(undefined8 *)(lVar1 + 0x7d8),*(undefined8 *)(lVar1 + 0x7c8),
                *(undefined8 *)(lVar1 + 0x678),0);
  FUN_1800e28b0(param_1,*(undefined4 *)(*(longlong *)(param_2 + 0x10) + 0x10),1,1,
                *(longlong *)(param_2 + 8) + 0x7e0);
  FUN_1800e29b0(param_1,*(undefined4 *)(*(longlong *)(param_2 + 0x10) + 0x10));
  FUN_1800e2a70(param_1,*(undefined4 *)(*(longlong *)(param_2 + 0x10) + 0x10),0,0);
  return 1;
}

