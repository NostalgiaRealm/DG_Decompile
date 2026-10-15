/*
 * FUN_14000f038 at 14000f038
 * undefined __cdecl FUN_14000f038(void)
 * Address ranges: 14000f038-14000f1a7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_14000f038(void)

{
  undefined *puVar1;
  char *pcVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  LPCWSTR lpWideCharStr;
  undefined8 uVar6;
  LPSTR lpMultiByteStr;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong extraout_x15;
  undefined1 auVar10 [16];
  
  auVar10 = FUN_140001280();
  lpWideCharStr = auVar10._8_8_;
  lVar3 = extraout_x15 * -0x10;
  FUN_1400251e8((short *)(&stack0xfffffffffffffff8 + lVar3),(short *)auVar10._0_8_);
  PathAppendW((LPWSTR)(&stack0xfffffffffffffff8 + lVar3),L"dgVoodooSettings.ini");
  FUN_14000f1f0((undefined8 *)(&stack0xffffffffffffffe0 + lVar3),
                (LPCWSTR)(&stack0xfffffffffffffff8 + lVar3),1);
  uVar9 = 0;
  uVar8 = 0;
  uVar7 = 0x1ffe;
  lpMultiByteStr = &stack0x00000600 + lVar3;
  uVar6 = 0xffffffff;
  WideCharToMultiByte(0,0x200,lpWideCharStr,-1,lpMultiByteStr,0x1ffe,(LPCSTR)0x0,(LPBOOL)0x0);
  uVar4 = FUN_1400251a8((ushort *)lpWideCharStr,auVar10._0_8_);
  puVar1 = &stack0x00000600 + lVar3;
  if (uVar4 == 0) {
    puVar1 = &DAT_140026ff0;
  }
  FUN_140024880(&stack0x00000200 + lVar3,"DataFolderRedirection = \"%s\"\n",puVar1,uVar6,
                lpMultiByteStr,uVar7,uVar8,uVar9);
  lVar5 = FUN_140024d20(&stack0x00000200 + lVar3);
  FUN_14000f420((longlong)(&stack0xffffffffffffffe0 + lVar3),(DWORD)lVar5,&stack0x00000200 + lVar3,
                (DWORD *)0x0);
  FUN_14000f420((longlong)(&stack0xffffffffffffffe0 + lVar3),1,&DAT_1400287e0,(DWORD *)0x0);
  uVar6 = 0;
  FUN_14000f420((longlong)(&stack0xffffffffffffffe0 + lVar3),6,"[Cpl]\n",(DWORD *)0x0);
  pcVar2 = "true";
  if ((char)lpWideCharStr[0x104] == '\0') {
    pcVar2 = "false";
  }
  FUN_140024880(&stack0x00000200 + lVar3,"ShowExtendedTabs = %s\n",pcVar2,uVar6,lpMultiByteStr,uVar7
                ,uVar8,uVar9);
  lVar5 = FUN_140024d20(&stack0x00000200 + lVar3);
  FUN_14000f420((longlong)(&stack0xffffffffffffffe0 + lVar3),(DWORD)lVar5,&stack0x00000200 + lVar3,
                (DWORD *)0x0);
  FUN_14000f420((longlong)(&stack0xffffffffffffffe0 + lVar3),1,&DAT_1400287e0,(DWORD *)0x0);
  FUN_14000f2c0((undefined8 *)(&stack0xffffffffffffffe0 + lVar3));
  return;
}

