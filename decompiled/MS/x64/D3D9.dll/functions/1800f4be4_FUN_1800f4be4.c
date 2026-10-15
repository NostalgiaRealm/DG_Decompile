/*
 * FUN_1800f4be4 at 1800f4be4
 * ulonglong __fastcall FUN_1800f4be4(longlong param_1, undefined4 param_2, undefined4 param_3, int param_4, undefined4 param_5)
 * Address ranges: 1800f4be4-1800f4c29
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_1800f4be4(longlong param_1,undefined4 param_2,undefined4 param_3,int param_4,
                       undefined4 param_5)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  lVar1 = *(longlong *)(param_1 + 8);
  puVar2 = FUN_1800e8998(-(ulonglong)(lVar1 != 0) & lVar1 + 0x6d0U,param_2,param_3,param_4,param_5,
                         *(undefined8 *)(lVar1 + 0x1b500));
  return -(ulonglong)(puVar2 != (undefined8 *)0x0) & (ulonglong)(puVar2 + 8);
}

