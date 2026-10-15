/*
 * FUN_10085cfd at 10085cfd
 * undefined __fastcall FUN_10085cfd(void * param_1)
 * Address ranges: 10085cfd-10085d70
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10085cfd(void *param_1)

{
  int iVar1;
  undefined4 local_18;
  int local_14;
  
  FUN_1008f5b4(param_1,&local_18);
  if (*(char *)((int)param_1 + 0x1bc) != '\0') {
    iVar1 = 0x34;
    if (*(int *)((int)param_1 + 0x1c) != 0x15) {
      iVar1 = 0x24;
    }
    local_14 = *(int *)(iVar1 + *(int *)((int)param_1 + 0xe0));
  }
  if ((*(int *)((int)param_1 + 0x24) == 1) || (iVar1 = local_14, *(uint *)((int)param_1 + 0x28) < 2)
     ) {
    iVar1 = 0;
  }
  FUN_10081a42((void *)((int)param_1 + 0xf0),*(int **)((int)param_1 + 0x54),local_14,iVar1,
               *(undefined4 *)(&DAT_100d2550 + *(int *)((int)param_1 + 0x1c) * 4),local_14,0,
               *(int *)((int)param_1 + 0x24) != 1);
  return;
}

