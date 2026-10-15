/*
 * FUN_180147030 at 180147030
 * undefined FUN_180147030(void)
 * Address ranges: 180147030-18014714b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong FUN_180147030(longlong param_1,longlong param_2,undefined8 param_3,undefined4 param_4,
                      byte param_5)

{
  longlong lVar1;
  longlong local_50;
  longlong local_48;
  
  FUN_180210af8(param_2 + 0x40,&local_50,param_5 + 1,
                *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0xf6e0) + 0x1500) + 0x18),
                *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0xf6e0) + 0x1508) + 0xb78));
  if (local_48 != 0) {
    if ((param_5 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_180104c48(local_48,param_3,param_4);
    }
    if (*(int *)(param_2 + 0x34) != 0) {
      *(undefined4 *)(param_2 + 0x34) = 0;
    }
    if (local_50 != 0) {
      return local_50;
    }
  }
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0xf6e0) + 0x1508);
  if (*(ulonglong *)(lVar1 + 0xb80) < *(ulonglong *)(lVar1 + 0xb78)) {
    FUN_18020c3b0(*(undefined8 *)(*(longlong *)(param_1 + 0xf6e0) + 0x1500));
    FUN_180210af8(param_2 + 0x40,&local_50,param_5 + 1,
                  *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0xf6e0) + 0x1500) + 0x18),
                  *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0xf6e0) + 0x1508) + 0xb78));
    if (local_48 != 0) {
      if ((param_5 & 1) == 0) {
        if (*(int *)(param_2 + 0x34) != 0) {
          *(int *)(param_2 + 0x34) = 0;
        }
        return local_50;
      }
                    /* WARNING: Subroutine does not return */
      thunk_FUN_180104c48(local_48,param_3,param_4);
    }
  }
  return 0;
}

