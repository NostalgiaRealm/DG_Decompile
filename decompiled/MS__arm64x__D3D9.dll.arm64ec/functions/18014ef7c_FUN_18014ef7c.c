/*
 * FUN_18014ef7c at 18014ef7c
 * undefined FUN_18014ef7c(void)
 * Address ranges: 18014ef7c-18014f003
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18014ef7c(ulonglong param_1,longlong param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  uint in_stack_00000010;
  
  iVar1 = (int)(uint)param_1 >> 3;
  *(byte *)((longlong)&stack0x00000010 + (longlong)iVar1) =
       *(byte *)((longlong)&stack0x00000010 + (longlong)iVar1) &
       ((byte)(param_3 << (ulonglong)((uint)param_1 & 7)) ^ 0xff);
  while( true ) {
    lVar3 = *(longlong *)(param_2 + 0xff38 + (param_1 & 0xffffffff) * 8);
    if (lVar3 != 0) {
      FUN_1801042e0(lVar3 + 0x38);
    }
    uVar2 = (in_stack_00000010 & 0xaaaaaaaa) >> 1 | (in_stack_00000010 & 0x55555555) << 1;
    uVar2 = (uVar2 & 0xcccccccc) >> 2 | (uVar2 & 0x33333333) << 2;
    uVar2 = (uVar2 & 0xf0f0f0f0) >> 4 | (uVar2 & 0xf0f0f0f) << 4;
    uVar2 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
    param_1 = LZCOUNT(uVar2 >> 0x10 | uVar2 << 0x10);
    uVar2 = (uint)param_1;
    if ((param_3 - (uVar2 >> 5) & 0xff) == 0) break;
    *(byte *)((longlong)&stack0x00000010 + (longlong)((int)uVar2 >> 3)) =
         *(byte *)((longlong)&stack0x00000010 + (longlong)((int)uVar2 >> 3)) &
         ((byte)(param_3 << (ulonglong)(uVar2 & 7)) ^ 0xff);
  }
  return;
}

