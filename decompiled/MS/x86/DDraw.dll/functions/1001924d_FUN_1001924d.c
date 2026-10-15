/*
 * FUN_1001924d at 1001924d
 * undefined __fastcall FUN_1001924d(void * param_1)
 * Address ranges: 1001924d-100192ad
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1001924d(void *param_1)

{
  int iVar1;
  undefined4 local_18;
  int local_14;
  
  FUN_100221f0(param_1,&local_18);
  if (*(char *)((int)param_1 + 0x1bc) != '\0') {
    iVar1 = 0x34;
    if (*(int *)((int)param_1 + 0x1c) != 0x15) {
      iVar1 = 0x24;
    }
    local_14 = *(int *)(iVar1 + *(int *)((int)param_1 + 0xe0));
  }
  FUN_1001529e((void *)((int)param_1 + 0xf0),*(int **)((int)param_1 + 0x54),local_14,local_14,
               *(undefined4 *)(&DAT_10062738 + *(int *)((int)param_1 + 0x1c) * 4),local_14,0,
               *(int *)((int)param_1 + 0x24) != 1);
  return;
}

