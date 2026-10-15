/*
 * FUN_140013a48 at 140013a48
 * undefined __cdecl FUN_140013a48(longlong param_1, ulonglong param_2, short * param_3)
 * Address ranges: 140013a48-140013aa7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_140013a48(longlong param_1,ulonglong param_2,short *param_3)

{
  longlong *plVar1;
  wchar_t *pwVar2;
  wchar_t awStack_150 [160];
  
  if (*(char *)(param_1 + 0x478) == '\0') {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x10) + (param_2 & 0xffffffff) * 0x28 + 8);
    (**(code **)(*plVar1 + 0x50))(plVar1,awStack_150);
    pwVar2 = awStack_150;
  }
  else {
    pwVar2 = L"Microsoft Basic Render Driver";
  }
  FUN_1400251e8(param_3,pwVar2);
  return;
}

