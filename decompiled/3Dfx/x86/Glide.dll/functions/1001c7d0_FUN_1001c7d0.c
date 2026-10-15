/*
 * FUN_1001c7d0 at 1001c7d0
 * undefined __thiscall FUN_1001c7d0(void * this, uint param_1)
 * Address ranges: 1001c7d0-1001c8e3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1001c7d0(void *this,uint param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  LARGE_INTEGER local_18;
  uint local_c;
  
  local_c = 7;
  *(uint *)((int)this + 0x38) = (*(int *)((int)this + 0x38) + 1U) % 7;
  QueryPerformanceCounter(&local_18);
  iVar4 = *(int *)((int)this + 0x38);
  iVar1 = *(int *)((int)this + (iVar4 + 4) * 0x10 + 4);
  if ((local_18.s.HighPart <= iVar1) &&
     ((local_18.s.HighPart < iVar1 ||
      (local_18.s.LowPart <= *(uint *)((int)this + (iVar4 + 4) * 0x10))))) {
    do {
      do {
        QueryPerformanceCounter(&local_18);
        iVar4 = *(int *)((int)this + 0x38);
        iVar1 = *(int *)((int)this + iVar4 * 0x10 + 0x44);
      } while (local_18.s.HighPart < iVar1);
    } while ((local_18.s.HighPart <= iVar1) &&
            (local_18.s.LowPart <= *(uint *)((int)this + iVar4 * 0x10 + 0x40)));
  }
  if ((*(int *)((int)this + 0x34) < local_18.s.HighPart) ||
     ((*(int *)((int)this + 0x34) <= local_18.s.HighPart &&
      (*(uint *)((int)this + 0x30) < local_18.s.LowPart)))) {
    uVar6 = __alldiv(local_18.s.LowPart - *(uint *)((int)this + 0x18),
                     (local_18.s.HighPart - *(int *)((int)this + 0x1c)) -
                     (uint)(local_18.s.LowPart < *(uint *)((int)this + 0x18)),
                     *(uint *)((int)this + 0x10),*(uint *)((int)this + 0x14));
    local_c = (int)uVar6 + param_1;
    lVar5 = __allmul(*(uint *)((int)this + 0x10),*(int *)((int)this + 0x14),local_c,0);
    iVar1 = (uint)lVar5 + *(uint *)((int)this + 0x18);
    *(int *)((int)this + 0x30) = iVar1;
    iVar3 = (int)((ulonglong)lVar5 >> 0x20) + *(int *)((int)this + 0x1c) +
            (uint)CARRY4((uint)lVar5,*(uint *)((int)this + 0x18));
    *(int *)((int)this + 0x34) = iVar3;
    uVar2 = local_c;
  }
  else {
    lVar5 = __allmul(param_1,0,*(uint *)((int)this + 0x10),*(int *)((int)this + 0x14));
    uVar2 = *(uint *)((int)this + 0x30);
    iVar1 = (uint)lVar5 + *(uint *)((int)this + 0x30);
    *(int *)((int)this + 0x30) = iVar1;
    iVar3 = (int)((ulonglong)lVar5 >> 0x20) + *(int *)((int)this + 0x34) +
            (uint)CARRY4((uint)lVar5,uVar2);
    *(int *)((int)this + 0x34) = iVar3;
    uVar2 = *(int *)((int)this + ((iVar4 + 6U) % local_c) * 0x10 + 0x48) + param_1;
  }
  *(int *)((int)this + (iVar4 + 4) * 0x10) = iVar1;
  *(int *)((int)this + (iVar4 + 4) * 0x10 + 4) = iVar3;
  *(uint *)((int)this + *(int *)((int)this + 0x38) * 0x10 + 0x48) = uVar2;
  FUN_1001b7e8(this,(uint *)&local_18);
  return;
}

