/*
 * FUN_1800226a8 at 1800226a8
 * undefined8 __cdecl FUN_1800226a8(longlong * param_1, LPCVOID param_2)
 * Address ranges: 1800226a8-1800228f7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1800226a8(longlong *param_1,LPCVOID param_2)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  SIZE_T SVar7;
  LPCVOID lpAddress;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  uint uVar11;
  undefined1 auVar12 [16];
  DWORD aDStack_80 [2];
  _MEMORY_BASIC_INFORMATION _Stack_78;
  
  (**(code **)(*param_1 + 0x88))();
  if ((*(char *)((longlong)param_1 + 300) != '\0') || (*(char *)((longlong)param_1 + 0x12d) != '\0')
     ) {
    (**(code **)(*param_1 + 0x50))(param_1,1,1);
  }
  uVar11 = 0;
  do {
    lVar6 = (**(code **)(*param_1 + 0x58))(param_1,uVar11);
    lpAddress = *(LPCVOID *)(lVar6 + 0x60);
    if (lpAddress <= param_2) {
      iVar8 = *(int *)(param_1[1] + 0xac) << 2;
      if (*(char *)(lVar6 + 0x94) == '\0') {
        iVar8 = *(int *)(param_1[1] + 0xac) << 1;
      }
      if (param_2 < (LPCVOID)((longlong)lpAddress +
                             (ulonglong)(uint)(iVar8 * *(int *)(lVar6 + 0x68)))) {
        uVar5 = (int)param_2 - (int)lpAddress;
        uVar2 = uVar5 & 0xffff8000;
        if ((*(char *)(lVar6 + 0x99) != '\0') &&
           (SVar7 = VirtualQuery(lpAddress,&_Stack_78,0x30), SVar7 != 0)) {
          VirtualProtect((LPVOID)(*(longlong *)(lVar6 + 0x60) + (longlong)(int)uVar2),0x8000,
                         _Stack_78.Protect & 0xfffffeff,aDStack_80);
        }
        (**(code **)(**(longlong **)(param_1[1] + 0x3188) + 8))
                  (*(longlong **)(param_1[1] + 0x3188),0,0);
        if ((*(byte *)(lVar6 + 0x9a) >> 1 & 1) != 0) {
          FUN_18002ab30(lVar6);
        }
        uVar3 = uVar5 >> 0xf;
        lVar1 = lVar6 + ((ulonglong)(uVar5 >> 0x15) + 0x14) * 8;
        if ((*(byte *)(lVar1 + ((ulonglong)(uVar5 >> 0x12) & 7)) >> ((ulonglong)uVar3 & 7) & 1) == 0
           ) {
          uVar9 = (ulonglong)*(uint *)(lVar6 + 0x20);
          auVar12 = FUN_18002a9a8(uVar2,uVar2 + 0x8000,*(uint *)(lVar6 + 0x20),
                                  *(uint *)(lVar6 + 0x24),*(int *)(lVar6 + 0x68),
                                  (uint)*(byte *)(lVar6 + 0x94));
          iVar8 = auVar12._4_4_;
          if ((uVar3 != 0) &&
             (uVar4 = uVar3 - 1,
             (*(byte *)(lVar6 + ((ulonglong)(uVar4 >> 6) + 0x14) * 8 + ((ulonglong)(uVar4 >> 3) & 7)
                       ) >> ((ulonglong)uVar4 & 7) & 1) == 0)) {
            iVar8 = iVar8 + -2;
          }
          iVar10 = 1;
          if (auVar12._8_4_ != 0) {
            iVar10 = 2;
          }
          iVar10 = iVar10 + auVar12._12_4_;
          if (*(int *)(param_1[1] + 0xac) < iVar10) {
            iVar10 = *(int *)(param_1[1] + 0xac);
          }
          if (iVar8 < 0) {
            iVar8 = 0;
          }
          (**(code **)(*param_1 + 0x70))(param_1,uVar11,0,iVar8,uVar9 & 0xffffffff,iVar10,uVar2);
          uVar9 = (ulonglong)(uVar5 >> 0x12) & 7;
          *(byte *)(lVar1 + uVar9) = *(byte *)(lVar1 + uVar9) | (byte)(1 << ((ulonglong)uVar3 & 7));
        }
        *(byte *)(lVar6 + 0x9a) = *(byte *)(lVar6 + 0x9a) & 0xfc | 1;
        return 1;
      }
    }
    uVar11 = uVar11 + 1;
    if (2 < uVar11) {
      return 0;
    }
  } while( true );
}

