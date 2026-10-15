/*
 * FUN_1800c2308 at 1800c2308
 * undefined8 __fastcall FUN_1800c2308(longlong param_1, undefined8 * param_2)
 * Address ranges: 1800c2308-1800c249f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1800c2308(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  bool bVar2;
  BOOL BVar3;
  int iVar4;
  LARGE_INTEGER LVar5;
  undefined8 uVar6;
  LARGE_INTEGER local_res10 [3];
  longlong local_48;
  longlong local_40;
  
  uVar6 = 0x8876086c;
  if (param_2 == (undefined8 *)0x0) {
    return 0x8876086c;
  }
  if (((*(byte *)(*(longlong *)(param_1 + 0x58) + 0xe78) & 4) == 0) &&
     (DAT_1801123a8[1].LockCount == 0)) {
    bVar2 = false;
    *(undefined4 *)((longlong)&DAT_1801123a8[1].DebugInfo + 4) = 1;
  }
  else {
    bVar2 = true;
    BVar3 = TryEnterCriticalSection(DAT_1801123a8);
    if (BVar3 == 0) {
      FUN_1800044dc(0);
    }
  }
  plVar1 = (longlong *)(&DAT_1801128e0)[(ulonglong)*(uint *)(param_1 + 0xf0) * 0x4b];
  iVar4 = (**(code **)(*plVar1 + 0x130))(plVar1);
  if (iVar4 == 0) {
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    if ((*(char *)(param_1 + 0x101) == '\0') &&
       ((*(uint *)(*(longlong *)(param_1 + 0x178) + 0xe78) & 0x4000) != 0)) {
      (**(code **)(*plVar1 + 0x148))
                (plVar1,&local_48,(&DAT_180112900)[(ulonglong)*(uint *)(param_1 + 0xf0) * 0x96]);
      QueryPerformanceCounter(local_res10);
      LVar5 = local_res10[0];
      if (local_40 < ((LARGE_INTEGER *)(param_1 + 0x110))->QuadPart) {
        LVar5.QuadPart = ((LARGE_INTEGER *)(param_1 + 0x110))->QuadPart;
      }
      *(undefined4 *)param_2 = *(undefined4 *)(param_1 + 0x118);
      *(int *)((longlong)param_2 + 4) = (int)(LVar5.QuadPart / local_48);
      *(int *)(param_2 + 1) = (int)((local_res10[0].QuadPart - local_40) / local_48);
      param_2[2] = *(undefined8 *)(param_1 + 0x110);
    }
    uVar6 = 0;
    goto LAB_1800c2476;
  }
  if (iVar4 != 1) {
    if (iVar4 == 2) {
      uVar6 = 0x88760870;
      goto LAB_1800c2476;
    }
    if (iVar4 == 3) {
      uVar6 = 0x88760868;
      goto LAB_1800c2476;
    }
    if (iVar4 != 4) goto LAB_1800c2476;
  }
  uVar6 = 0x88760874;
LAB_1800c2476:
  if (bVar2) {
    LeaveCriticalSection(DAT_1801123a8);
  }
  else {
    *(undefined4 *)((longlong)&DAT_1801123a8[1].DebugInfo + 4) = 0;
  }
  return uVar6;
}

