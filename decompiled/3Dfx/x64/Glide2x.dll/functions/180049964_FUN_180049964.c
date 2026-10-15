/*
 * FUN_180049964 at 180049964
 * undefined8 __fastcall FUN_180049964(longlong param_1, ulonglong param_2, longlong param_3, longlong param_4, undefined4 param_5)
 * Address ranges: 180049964-180049a23
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_180049964(longlong param_1,ulonglong param_2,longlong param_3,longlong param_4,
             undefined4 param_5)

{
  undefined8 uVar1;
  
  FUN_180056eb8(param_3,*(int *)(param_4 + 0x20),*(undefined8 *)(param_4 + 0x10),
                *(ulonglong *)(param_4 + 0x18),*(longlong **)(*(longlong *)(param_1 + 0xb10) + 0x18)
                ,*(ulonglong *)(param_1 + 0xb78));
  FUN_180047a5c(param_1,param_2,0,1,0x400);
  FUN_180047208(param_1);
  FUN_180047348(param_1);
  (**(code **)(**(longlong **)(param_1 + 0x688) + 0x78))
            (*(longlong **)(param_1 + 0x688),param_2,param_5,*(undefined8 *)(param_4 + 8),
             *(longlong *)(param_4 + 0x10) - *(longlong *)(param_4 + 0x18),
             *(undefined4 *)(param_4 + 0x20));
  uVar1 = FUN_1800472f8(param_1);
  return CONCAT71((int7)((ulonglong)uVar1 >> 8),1);
}

