/*
 * FUN_100447ca at 100447ca
 * undefined __thiscall FUN_100447ca(void * this, int param_1)
 * Address ranges: 100447ca-10044937
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100447ca(void *this,int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  DWORD dwMilliseconds;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  LARGE_INTEGER local_18;
  uint local_c;
  
  if (((param_1 != 0) && (-1 < *(int *)(param_1 + 0xd4c))) &&
     ((0 < *(int *)(param_1 + 0xd4c) || (*(int *)(param_1 + 0xd48) != 0)))) {
    QueryPerformanceCounter(&local_18);
    iVar3 = *(int *)(param_1 + 0xd54);
    uVar4 = *(uint *)(param_1 + 0xd50);
    if ((-1 < iVar3) && ((0 < iVar3 || (uVar4 != 0)))) {
      iVar1 = (local_18.s.HighPart - iVar3) - (uint)(local_18.s.LowPart < uVar4);
      if ((iVar1 <= *(int *)(param_1 + 0xd4c)) &&
         ((uVar2 = *(uint *)(param_1 + 0xd48), iVar1 < *(int *)(param_1 + 0xd4c) ||
          (local_18.s.LowPart - uVar4 < uVar2)))) {
        do {
          lVar5 = __allmul((uVar4 + uVar2) - local_18._0_4_,
                           ((iVar3 + *(int *)(param_1 + 0xd4c) + (uint)CARRY4(uVar4,uVar2)) -
                           local_18._4_4_) - (uint)(uVar4 + uVar2 < local_18.s.LowPart),10,0);
          uVar6 = __alldiv((uint)lVar5,(uint)((ulonglong)lVar5 >> 0x20),*(uint *)((int)this + 0x500)
                           ,*(uint *)((int)this + 0x504));
          if ((0x10 < (uint)uVar6) && (*(code **)((int)this + 0x2cc) != (code *)0x0)) {
            if (*(char *)((int)this + 0x2d8) == '\0') {
              iVar3 = (**(code **)((int)this + 0x2cc))(1);
              if (iVar3 == 0) {
                *(undefined1 *)((int)this + 0x2d8) = 1;
              }
              else {
                *(undefined4 *)((int)this + 0x2cc) = 0;
                *(undefined4 *)((int)this + 0x2d0) = 0;
              }
            }
            dwMilliseconds = (DWORD)((uVar6 & 0xffffffff) / 10);
            if ((uint)((uVar6 & 0xffffffff) % 10) < 6) {
              dwMilliseconds = dwMilliseconds - 1;
            }
            Sleep(dwMilliseconds);
          }
          QueryPerformanceCounter(&local_18);
          uVar4 = *(uint *)(param_1 + 0xd50);
          local_c = local_18.s.LowPart - uVar4;
          iVar3 = *(int *)(param_1 + 0xd54);
          iVar1 = (local_18.s.HighPart - iVar3) - (uint)(local_18.s.LowPart < uVar4);
          uVar2 = *(uint *)(param_1 + 0xd48);
        } while ((iVar1 < *(int *)(param_1 + 0xd4c)) ||
                ((iVar1 <= *(int *)(param_1 + 0xd4c) && (local_c < uVar2))));
      }
    }
    *(undefined4 *)(param_1 + 0xd50) = local_18.s.LowPart;
    *(LONG *)(param_1 + 0xd54) = local_18.s.HighPart;
  }
  return;
}

