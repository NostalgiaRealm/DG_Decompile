/*
 * FUN_180056b48 at 180056b48
 * undefined8 __fastcall FUN_180056b48(longlong param_1)
 * Address ranges: 180056b48-180056ca2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180056b48(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  uint uVar3;
  HANDLE hThread;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong *puVar6;
  
  hThread = GetCurrentThread();
  SetThreadPriority(hThread,1);
  plVar2 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x1500) + 0x18);
  if (*(char *)(param_1 + 0xb8) == '\0') {
    do {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x80));
      uVar5 = 0;
      if (*(int *)(param_1 + 0x60) != 0) {
        uVar4 = (**(code **)(**(longlong **)
                               (*(longlong *)(*(longlong *)(param_1 + 8) + 0x1500) + 0x18) + 0x40))
                          ();
        uVar3 = *(uint *)(param_1 + 0x50);
        while (uVar5 = 0, uVar3 != 0xffffffff) {
          puVar6 = (ulonglong *)(*(longlong *)(param_1 + 0x40) + (ulonglong)uVar3 * 0x40);
          uVar5 = 0;
          if ((*puVar6 == 0) || (uVar5 = puVar6[2], uVar4 < uVar5)) break;
          if ((*(char *)((longlong)puVar6 + 0x3d) == '\0') &&
             (FUN_180056ca4((ulonglong)uVar3 * 0x40,(longlong *)puVar6),
             *(char *)((longlong)puVar6 + 0x3c) != '\0')) {
            FUN_180057844(param_1 + 0x68,puVar6);
          }
          uVar1 = (uint)puVar6[7];
          *puVar6 = 0;
          if ((uVar1 != 0xffffffff) &&
             (*(longlong *)(*(longlong *)(param_1 + 0x40) + (ulonglong)uVar1 * 0x40) != 0)) {
            *(uint *)(param_1 + 0x50) = uVar1;
            *(undefined4 *)(puVar6 + 7) =
                 *(undefined4 *)
                  (*(longlong *)(param_1 + 0x40) + 0x38 +
                  (ulonglong)*(uint *)(param_1 + 0x54) * 0x40);
            *(uint *)(*(longlong *)(param_1 + 0x40) + 0x38 +
                     (ulonglong)*(uint *)(param_1 + 0x54) * 0x40) = uVar3;
          }
          *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + -1;
          uVar3 = uVar1;
        }
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x80));
      if (uVar5 != 0) {
        (**(code **)(*plVar2 + 0x48))(plVar2,uVar5,*(undefined8 *)(param_1 + 0xb0));
      }
      WaitForSingleObject(*(HANDLE *)(param_1 + 0xb0),0xffffffff);
    } while (*(char *)(param_1 + 0xb8) == '\0');
  }
  return 0;
}

