/*
 * FUN_1800182a8 at 1800182a8
 * undefined __fastcall FUN_1800182a8(longlong param_1, longlong param_2, char param_3)
 * Address ranges: 1800182a8-18001834e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800182a8(longlong param_1,longlong param_2,char param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = (longlong *)(param_1 + 0x140);
  if ((*(longlong *)(param_2 + 0xd0) != 0) &&
     (uVar2 = FUN_180049e38(*(longlong *)(*(longlong *)(*plVar1 + 0x3340) + 0x1508) + 8,'\0'),
     (char)uVar2 != '\0')) {
    FUN_18004a204(*(longlong *)(*(longlong *)(*plVar1 + 0x3340) + 0x1508),
                  *(ulonglong *)(param_2 + 0xd0));
    *(undefined8 *)(param_2 + 0xd0) = 0;
    return;
  }
  FUN_180045c88(*(longlong **)(*(longlong *)(*plVar1 + 0x3330) + 0x1b500),
                *(ulonglong *)(param_2 + 0x120 + (ulonglong)(-(uint)(param_3 != '\0') & 0x30)));
  return;
}

