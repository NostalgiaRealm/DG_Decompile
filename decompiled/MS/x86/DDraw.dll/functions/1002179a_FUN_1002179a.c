/*
 * FUN_1002179a at 1002179a
 * undefined4 __thiscall FUN_1002179a(void * this, int param_1, undefined4 param_2, int param_3, int * param_4)
 * Address ranges: 1002179a-10021826
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall
FUN_1002179a(void *this,int param_1,undefined4 param_2,int param_3,int *param_4)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  bool bVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  LARGE_INTEGER local_c;
  
  local_c.s.LowPart = (DWORD)this;
  local_c.s.HighPart = (LONG)this;
  QueryPerformanceCounter(&local_c);
  iVar5 = param_1 * 0xc18;
  uVar2 = *(uint *)(iVar5 + 0xca8 + (int)this);
  uVar3 = *(uint *)(iVar5 + 0xcac + (int)this);
  puVar1 = (uint *)(iVar5 + 0xcb0 + (int)this);
  uVar7 = __allrem(local_c.s.LowPart - *puVar1,
                   (local_c.s.HighPart - *(int *)(iVar5 + 0xcb4 + (int)this)) -
                   (uint)(local_c.s.LowPart < (void *)*puVar1),*(uint *)(iVar5 + 0xca8 + (int)this),
                   uVar3);
  lVar4 = (uVar7 & 0xffffffff) * (ulonglong)(param_3 + 1U);
  uVar8 = __aulldiv((uint)lVar4,
                    (int)(uVar7 >> 0x20) * (param_3 + 1U) + (int)((ulonglong)lVar4 >> 0x20),uVar2,
                    uVar3);
  iVar5 = (int)uVar8;
  bVar6 = iVar5 == param_3;
  if (param_4 != (int *)0x0) {
    if (iVar5 == param_3) {
      iVar5 = 0;
    }
    *param_4 = iVar5;
  }
  return CONCAT31((int3)((uint)iVar5 >> 8),bVar6);
}

