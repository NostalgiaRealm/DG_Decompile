/*
 * FUN_180025a44 at 180025a44
 * undefined __fastcall FUN_180025a44(longlong param_1, longlong param_2, char param_3)
 * Address ranges: 180025a44-180025aea
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180025a44(longlong param_1,longlong param_2,char param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = (longlong *)(param_1 + 0x140);
  if ((*(longlong *)(param_2 + 0xd0) != 0) &&
     (uVar2 = FUN_18004782c(*(longlong *)(*(longlong *)(*plVar1 + 0x31c0) + 0x1508) + 8,'\0'),
     (char)uVar2 != '\0')) {
    FUN_180047bf8(*(longlong *)(*(longlong *)(*plVar1 + 0x31c0) + 0x1508),
                  *(ulonglong *)(param_2 + 0xd0));
    *(undefined8 *)(param_2 + 0xd0) = 0;
    return;
  }
  FUN_18004367c(*(longlong **)(*(longlong *)(*plVar1 + 0x31b0) + 0x1b500),
                *(ulonglong *)(param_2 + 0x120 + (ulonglong)(-(uint)(param_3 != '\0') & 0x30)));
  return;
}

