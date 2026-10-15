/*
 * FUN_1001e6bd at 1001e6bd
 * undefined4 __thiscall FUN_1001e6bd(void * this, LONG * param_1)
 * Address ranges: 1001e6bd-1001e72e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_1001e6bd(void *this,LONG *param_1)

{
  int iVar1;
  int iVar2;
  LPCRITICAL_SECTION lpCriticalSection;
  tagRECT local_34;
  LONG local_24;
  LONG LStack_20;
  LONG LStack_1c;
  LONG LStack_18;
  LONG local_14;
  LONG LStack_10;
  LONG LStack_c;
  LONG LStack_8;
  
  iVar1 = *(int *)(*(int *)((int)this + 0x315c) + 8);
  iVar2 = *(int *)(*(int *)(*(int *)((int)this + 0x315c) + 4) + 0x295c);
  FUN_10050561(&local_34.left,0,0x30);
  lpCriticalSection = (LPCRITICAL_SECTION)(iVar2 + 0x4a0);
  EnterCriticalSection(lpCriticalSection);
  FUN_1004342b(iVar1,&local_34,(int *)0x0);
  LeaveCriticalSection(lpCriticalSection);
  param_1[8] = local_14;
  param_1[9] = LStack_10;
  param_1[10] = LStack_c;
  param_1[0xb] = LStack_8;
  param_1[4] = local_24;
  param_1[5] = LStack_20;
  param_1[6] = LStack_1c;
  param_1[7] = LStack_18;
  *param_1 = local_34.left;
  param_1[1] = local_34.top;
  param_1[2] = local_34.right;
  param_1[3] = local_34.bottom;
  return CONCAT31((int3)((uint)param_1 >> 8),1);
}

