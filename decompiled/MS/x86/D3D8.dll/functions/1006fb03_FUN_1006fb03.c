/*
 * FUN_1006fb03 at 1006fb03
 * undefined __fastcall FUN_1006fb03(void * param_1)
 * Address ranges: 1006fb03-1006fb63
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1006fb03(void *param_1)

{
  int iVar1;
  undefined4 local_18;
  int local_14;
  
  FUN_1007923c(param_1,&local_18);
  if (*(char *)((int)param_1 + 0x1bc) != '\0') {
    iVar1 = 0x34;
    if (*(int *)((int)param_1 + 0x1c) != 0x15) {
      iVar1 = 0x24;
    }
    local_14 = *(int *)(iVar1 + *(int *)((int)param_1 + 0xe0));
  }
  FUN_1006bb4f((void *)((int)param_1 + 0xf0),*(int **)((int)param_1 + 0x54),local_14,local_14,
               *(undefined4 *)(&DAT_100b0408 + *(int *)((int)param_1 + 0x1c) * 4),local_14,0,
               *(int *)((int)param_1 + 0x24) != 1);
  return;
}

