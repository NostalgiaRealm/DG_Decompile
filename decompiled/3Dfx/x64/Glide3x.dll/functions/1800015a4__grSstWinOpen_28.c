/*
 * _grSstWinOpen@28 at 1800015a4
 * undefined4 __fastcall _grSstWinOpen@28(ulonglong param_1, uint param_2, undefined8 param_3, undefined8 param_4, undefined1 param_5, uint param_6, uint param_7)
 * Address ranges: 1800015a4-180001671
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4
_grSstWinOpen_28(ulonglong param_1,uint param_2,undefined8 param_3,undefined8 param_4,
                undefined1 param_5,uint param_6,uint param_7)

{
  HMODULE pHVar1;
  int iVar2;
  char cVar3;
  undefined4 uVar4;
  HMODULE pHVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  uint in_stack_ffffffffffffffa4;
  undefined1 local_38 [8];
  char *local_30;
  
                    /* 0x15a4  68  _grSstWinOpen@28
                       0x15a4  168  grSstWinOpen */
  uVar8 = param_1 & 0xffffffff;
  local_30 = "3DfxSpl3.dll";
  local_38[0] = 0;
  uVar6 = param_3;
  uVar7 = param_4;
  pHVar5 = (HMODULE)FUN_1800069ac();
  *(undefined1 *)((longlong)&pHVar5[0x19].unused + 1) = 1;
  cVar3 = FUN_1800057b0(param_1);
  if ((cVar3 != '\0') && ((char)pHVar5[0x19].unused != '\0')) {
    FUN_180007784(pHVar5,0,uVar6,uVar7);
  }
  LOCK();
  pHVar1 = pHVar5 + 0x17;
  iVar2 = pHVar1->unused;
  pHVar1->unused = pHVar1->unused + 1;
  UNLOCK();
  if (iVar2 == 0) {
    cVar3 = FUN_180006b64((WNDPROC)pHVar5);
    if ((cVar3 != '\0') && (pHVar5[0x16].unused == 0)) {
      uVar4 = FUN_180006d48((WNDPROC)pHVar5,uVar8,param_2,(uint)param_3,(int)param_4,
                            (ulonglong)in_stack_ffffffffffffffa4 << 0x20,param_5,param_6,param_7,
                            local_38);
      goto LAB_18000165f;
    }
  }
  uVar4 = 0;
LAB_18000165f:
  LOCK();
  pHVar5[0x17].unused = pHVar5[0x17].unused + -1;
  UNLOCK();
  *(undefined1 *)((longlong)&pHVar5[0x19].unused + 1) = 0;
  return uVar4;
}

