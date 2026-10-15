/*
 * FUN_1800236a8 at 1800236a8
 * undefined __cdecl FUN_1800236a8(longlong param_1, undefined8 * param_2)
 * Address ranges: 1800236a8-1800237cf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800236a8(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 auStack_1e0 [54];
  
  FUN_18001bf90(param_1 + 0x3668);
  thunk_FUN_1800010d8(auStack_1e0,param_2,0x1af);
  lVar4 = *(longlong *)(param_1 + 0x3340);
  FUN_180038440((uint *)(lVar4 + 0x12c0));
  if (*(char *)(lVar4 + 0x14c4) != '\0') {
    puVar1 = (undefined8 *)FUN_180038310(lVar4 + 0x12c0,0x1b8);
    if (puVar1 != (undefined8 *)0x0) {
      FUN_1800643e0((uint *)(lVar4 + 0x14c0));
      puVar1[1] = 0x1b8;
      puVar1[2] = param_1;
      thunk_FUN_1800010d8(puVar1 + 3,auStack_1e0,0x1af);
      puVar2 = (undefined8 *)((longlong)puVar1 + 0x1ceU & 0xfffffffffffffff8);
      *puVar2 = 0;
      *puVar1 = FUN_1800237d0;
      *(undefined8 **)(lVar4 + (ulonglong)*(uint *)(lVar4 + 0x14bc) * 0x28 + 0x1350) = puVar2;
      if (*(char *)(lVar4 + 0x14c5) != '\0') {
        *(undefined4 *)(lVar4 + 0x12c0) = 0;
        SetEvent(*(HANDLE *)(lVar4 + 0x1340));
        return;
      }
      goto LAB_1800237b8;
    }
    *(undefined4 *)(lVar4 + 0x12c0) = 0;
    Sleep(100);
    FUN_180038440((uint *)(lVar4 + 0x12c0));
  }
  plVar3 = *(longlong **)(lVar4 + 0x14a0);
  *plVar3 = param_1;
  thunk_FUN_1800010d8(plVar3 + 1,auStack_1e0,0x1af);
  FUN_1800237d0(plVar3);
LAB_1800237b8:
  *(undefined4 *)(lVar4 + 0x12c0) = 0;
  return;
}

