/*
 * FUN_140015a38 at 140015a38
 * uint __cdecl FUN_140015a38(undefined8 param_1, undefined8 param_2, char * param_3)
 * Address ranges: 140015a38-140015aef
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_140015a38(undefined8 param_1,undefined8 param_2,char *param_3)

{
  longlong lVar1;
  bool bVar2;
  uint uVar3;
  ulonglong uVar4;
  LPSTR lpMultiByteStr;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong extraout_x15;
  undefined1 auVar8 [16];
  
  auVar8 = FUN_140001280();
  lVar1 = extraout_x15 * -0x10;
  uVar7 = 0;
  uVar6 = 0;
  uVar5 = 0x1ffe;
  lpMultiByteStr = &stack0xffffffffffffffe8 + lVar1;
  WideCharToMultiByte(0,0x200,auVar8._8_8_,-1,lpMultiByteStr,0x1ffe,(LPCSTR)0x0,(LPBOOL)0x0);
  FUN_14000f1f0((undefined8 *)(&stack0xffffffffffffffd0 + lVar1),auVar8._8_8_,1);
  uVar4 = 0;
  FUN_14000f300((longlong)(&stack0xffffffffffffffd0 + lVar1),0,0,(DWORD *)0x0);
  if (param_3 == (char *)0x0) {
    bVar2 = FUN_14001eec8(auVar8._0_8_,(longlong *)(&stack0xffffffffffffffd0 + lVar1));
    uVar3 = (uint)bVar2;
  }
  else {
    uVar3 = FUN_14001b450(auVar8._0_8_,(longlong *)(&stack0xffffffffffffffd0 + lVar1),param_3,uVar4,
                          (ulonglong)lpMultiByteStr,uVar5,uVar6,uVar7);
  }
  FUN_14000f2c0((undefined8 *)(&stack0xffffffffffffffd0 + lVar1));
  return uVar3;
}

