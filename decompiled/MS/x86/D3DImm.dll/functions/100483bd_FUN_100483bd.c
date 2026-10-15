/*
 * FUN_100483bd at 100483bd
 * undefined __fastcall FUN_100483bd(void * param_1)
 * Address ranges: 100483bd-10048479
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_100483bd(void *param_1)

{
  void *this;
  void *extraout_ECX;
  void *extraout_ECX_00;
  void *extraout_ECX_01;
  int iVar1;
  
  this = param_1;
  for (iVar1 = *(int *)((int)param_1 + 0xa0); iVar1 != 0; iVar1 = iVar1 + -1) {
    FUN_1003eba2(*(void **)(*(int *)((int)param_1 + 0x9c) + -4 + iVar1 * 4),'\0');
    this = extraout_ECX;
  }
  for (iVar1 = *(int *)((int)param_1 + 0xac); iVar1 != 0; iVar1 = iVar1 + -1) {
    FUN_1004c1f7(*(undefined4 **)(*(int *)((int)param_1 + 0xa8) + -4 + iVar1 * 4));
    this = extraout_ECX_00;
  }
  for (iVar1 = *(int *)((int)param_1 + 0xb8); iVar1 != 0; iVar1 = iVar1 + -1) {
    FUN_1004a933(this,*(undefined4 **)(*(int *)((int)param_1 + 0xb4) + -4 + iVar1 * 4));
    this = extraout_ECX_01;
  }
  for (iVar1 = *(int *)((int)param_1 + 0xc4); iVar1 != 0; iVar1 = iVar1 + -1) {
    FUN_1004b1a1(*(LPVOID *)(*(int *)((int)param_1 + 0xc0) + -4 + iVar1 * 4));
  }
  for (iVar1 = *(int *)((int)param_1 + 0xd0); iVar1 != 0; iVar1 = iVar1 + -1) {
    FUN_1004bbb3(*(undefined4 **)(*(int *)((int)param_1 + 0xcc) + -4 + iVar1 * 4));
  }
  for (iVar1 = *(int *)((int)param_1 + 0xdc); iVar1 != 0; iVar1 = iVar1 + -1) {
    FUN_10048078(*(void **)(*(int *)((int)param_1 + 0xd8) + -4 + iVar1 * 4));
  }
  return;
}

