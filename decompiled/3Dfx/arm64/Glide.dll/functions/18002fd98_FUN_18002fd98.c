/*
 * FUN_18002fd98 at 18002fd98
 * undefined __cdecl FUN_18002fd98(longlong param_1, undefined8 * param_2)
 * Address ranges: 18002fd98-18002febf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18002fd98(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 auStack_170 [40];
  
  FUN_1800292e8(param_1 + 0x34e8);
  thunk_FUN_180001218(auStack_170,param_2,0x135);
  lVar4 = *(longlong *)(param_1 + 0x31c0);
  FUN_1800437d0((uint *)(lVar4 + 0x12c0));
  if (*(char *)(lVar4 + 0x14c4) != '\0') {
    puVar1 = (undefined8 *)FUN_1800436a0(lVar4 + 0x12c0,0x140);
    if (puVar1 != (undefined8 *)0x0) {
      FUN_180061700((uint *)(lVar4 + 0x14c0));
      puVar1[1] = 0x140;
      puVar1[2] = param_1;
      thunk_FUN_180001218(puVar1 + 3,auStack_170,0x135);
      puVar2 = (undefined8 *)((longlong)puVar1 + 0x154U & 0xfffffffffffffff8);
      *puVar2 = 0;
      *puVar1 = FUN_18002fec0;
      *(undefined8 **)(lVar4 + (ulonglong)*(uint *)(lVar4 + 0x14bc) * 0x28 + 0x1350) = puVar2;
      if (*(char *)(lVar4 + 0x14c5) != '\0') {
        *(undefined4 *)(lVar4 + 0x12c0) = 0;
        SetEvent(*(HANDLE *)(lVar4 + 0x1340));
        return;
      }
      goto LAB_18002fea8;
    }
    *(undefined4 *)(lVar4 + 0x12c0) = 0;
    Sleep(100);
    FUN_1800437d0((uint *)(lVar4 + 0x12c0));
  }
  plVar3 = *(longlong **)(lVar4 + 0x14a0);
  *plVar3 = param_1;
  thunk_FUN_180001218(plVar3 + 1,auStack_170,0x135);
  FUN_18002fec0(plVar3);
LAB_18002fea8:
  *(undefined4 *)(lVar4 + 0x12c0) = 0;
  return;
}

