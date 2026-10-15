/*
 * FUN_18003197c at 18003197c
 * bool __fastcall FUN_18003197c(longlong param_1, HANDLE param_2, uint param_3, undefined8 param_4, char param_5)
 * Address ranges: 18003197c-180031aba
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_18003197c(longlong param_1,HANDLE param_2,uint param_3,undefined8 param_4,char param_5)

{
  char cVar1;
  LPVOID pvVar2;
  longlong lVar3;
  ulonglong dwSize;
  uint uVar4;
  bool bVar5;
  
  uVar4 = (uint)*(ushort *)(param_1 + 0x14) * *(int *)(param_1 + 0x1c);
  bVar5 = true;
  cVar1 = *(char *)(DAT_180111f20 + 0x888);
  dwSize = (ulonglong)(uVar4 + param_3 * 2);
  if (param_2 == (HANDLE)0x0) {
    pvVar2 = VirtualAlloc((LPVOID)0x0,dwSize,0x3000,4);
  }
  else {
    pvVar2 = MapViewOfFile(param_2,0xf001f,0,0,dwSize);
  }
  if (pvVar2 != (LPVOID)0x0) {
    *(undefined1 **)(param_1 + 0x28) = (undefined1 *)((longlong)pvVar2 + (ulonglong)param_3);
    if (param_2 == (HANDLE)0x0) {
      FUN_1800fbea0((undefined1 *)((longlong)pvVar2 + (ulonglong)param_3),0,(ulonglong)uVar4);
    }
    bVar5 = *(longlong *)(param_1 + 0x28) != 0;
    if ((cVar1 != '\0') && (param_5 != '\0')) {
      uVar4 = ((uint)*(ushort *)(param_1 + 0x14) * *(int *)(param_1 + 0x1c) + 0xfff >> 0xf) + 1;
      *(uint *)(param_1 + 0x40) = uVar4;
      lVar3 = thunk_FUN_1800fbccc((ulonglong)uVar4);
      *(longlong *)(param_1 + 0x30) = lVar3;
      if (lVar3 != 0) {
        lVar3 = thunk_FUN_1800fbccc((ulonglong)*(uint *)(param_1 + 0x40));
        *(longlong *)(param_1 + 0x38) = lVar3;
        if (lVar3 == 0) {
          FUN_1800fbcf0(*(undefined1 **)(param_1 + 0x30));
          *(undefined8 *)(param_1 + 0x30) = 0;
        }
        else {
          FUN_1800fbea0(*(undefined1 **)(param_1 + 0x30),0,(ulonglong)*(uint *)(param_1 + 0x40));
          FUN_1800fbea0(*(undefined1 **)(param_1 + 0x38),0,(ulonglong)*(uint *)(param_1 + 0x40));
        }
      }
      FUN_180031b98(param_1,0,0);
    }
    *(uint *)(param_1 + 0x48) = *(uint *)(param_1 + 0x48) & 0xffffffe7;
    FUN_18002f854(param_1);
  }
  uVar4 = *(uint *)(param_1 + 0x48) | 0x20;
  if (bVar5 == false) {
    uVar4 = *(uint *)(param_1 + 0x48) & 0xffffffdf;
  }
  *(uint *)(param_1 + 0x48) = uVar4;
  return bVar5;
}

