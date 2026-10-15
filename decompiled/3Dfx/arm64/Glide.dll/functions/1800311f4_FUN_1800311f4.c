/*
 * FUN_1800311f4 at 1800311f4
 * undefined __cdecl FUN_1800311f4(longlong param_1, undefined8 * param_2)
 * Address ranges: 1800311f4-18003130b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800311f4(longlong param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  
  FUN_1800292e8(param_1 + 0x34e8);
  lVar7 = *(longlong *)(param_1 + 0x31c0);
  uVar3 = *(uint *)(param_1 + 0xe8);
  FUN_1800437d0((uint *)(lVar7 + 0x12c0));
  if (*(char *)(lVar7 + 0x14c4) != '\0') {
    uVar1 = uVar3 + 7;
    uVar2 = (uVar1 & 0xfffffff8) + 0x10;
    puVar4 = (undefined8 *)FUN_1800436a0(lVar7 + 0x12c0,uVar2);
    if (puVar4 != (undefined8 *)0x0) {
      FUN_180061700((uint *)(lVar7 + 0x14c0));
      puVar4[1] = (ulonglong)uVar2;
      puVar6 = (undefined8 *)((longlong)puVar4 + 0x27U & 0xfffffffffffffff8);
      puVar4[2] = puVar6;
      puVar4[3] = param_1;
      thunk_FUN_180001218(puVar6,param_2,(ulonglong)uVar3);
      uVar5 = (ulonglong)uVar1 & 0xfffffff8;
      *(undefined8 *)(uVar5 + (longlong)puVar6) = 0;
      *puVar4 = FUN_180031310;
      *(ulonglong *)(lVar7 + (ulonglong)*(uint *)(lVar7 + 0x14bc) * 0x28 + 0x1350) =
           uVar5 + (longlong)puVar6;
      if (*(char *)(lVar7 + 0x14c5) != '\0') {
        *(undefined4 *)(lVar7 + 0x12c0) = 0;
        SetEvent(*(HANDLE *)(lVar7 + 0x1340));
        return;
      }
      goto LAB_1800312ec;
    }
    *(undefined4 *)(lVar7 + 0x12c0) = 0;
    Sleep(100);
    FUN_1800437d0((uint *)(lVar7 + 0x12c0));
  }
  puVar4 = *(undefined8 **)(lVar7 + 0x14a0);
  *puVar4 = param_2;
  puVar4[1] = param_1;
  FUN_180031310(puVar4);
LAB_1800312ec:
  *(undefined4 *)(lVar7 + 0x12c0) = 0;
  return;
}

