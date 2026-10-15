/*
 * FUN_180076c30 at 180076c30
 * undefined FUN_180076c30(void)
 * Address ranges: 180076c30-180076ccf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_180076c30(undefined8 param_1,longlong param_2,undefined8 param_3,uint param_4,
                  undefined8 param_5,undefined8 param_6)

{
  uint uVar1;
  undefined1 uVar2;
  
  if (((*(char *)(param_2 + (ulonglong)param_4 + 0xde) != '\x02' || param_4 != 7) ||
      (*(char *)(*(longlong *)(param_2 + 0x10) + 0x4a6c) != '\x01')) ||
     (uVar2 = 1, *(char *)(*(longlong *)(param_2 + 0x10) + 0x4a6d) != '\x01')) {
    uVar2 = 0;
  }
  uVar1 = FUN_18006dee8(param_1,param_3,param_2,param_4 | 0x410100,param_5,param_6,
                        *(undefined1 *)(param_2 + (ulonglong)param_4 + 0xee),0,uVar2);
  *(uint *)(param_2 + (ulonglong)param_4 * 4 + 0x100) = uVar1;
  return uVar1 == (param_4 | 0x410100);
}

