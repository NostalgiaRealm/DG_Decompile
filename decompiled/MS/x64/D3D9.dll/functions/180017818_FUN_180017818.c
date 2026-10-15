/*
 * FUN_180017818 at 180017818
 * undefined __fastcall FUN_180017818(longlong param_1, longlong param_2)
 * Address ranges: 180017818-180017992
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180017818(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  longlong local_628;
  undefined8 auStack_620 [191];
  
  if (*(char *)(param_1 + 0x89) == '\0') {
    uVar5 = 0;
    if (*(int *)(param_1 + 0x80) != 0) {
      do {
        uVar8 = 0;
        while( true ) {
          uVar6 = 1;
          if ((*(uint *)(param_1 + 0x70) & 0x400) == 0) {
            uVar6 = (uint)*(ushort *)(param_1 + 0x3c);
          }
          if (uVar6 <= uVar8) break;
          plVar2 = *(longlong **)
                    (*(longlong *)(param_2 + (ulonglong)(uVar5 * 0x10 + uVar8) * 8) + 8);
          FUN_180032e10(plVar2);
          FUN_180032470(plVar2 + 0xd);
          uVar8 = uVar8 + 1;
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < *(uint *)(param_1 + 0x80));
    }
  }
  else {
    uVar5 = 1;
    if ((*(uint *)(param_1 + 0x70) & 0x400) == 0) {
      uVar5 = (uint)*(ushort *)(param_1 + 0x3c);
    }
    FUN_1800fbea0((undefined1 *)&local_628,0,0x600);
    uVar8 = *(uint *)(param_1 + 0x80);
    uVar6 = 0;
    if (uVar8 != 0) {
      do {
        if (uVar5 != 0) {
          uVar7 = 0;
          do {
            uVar3 = uVar7 + uVar6 * 0x10;
            uVar4 = (ulonglong)(uVar6 * uVar5 + uVar7);
            uVar7 = uVar7 + 1;
            lVar1 = *(longlong *)(*(longlong *)(param_2 + (ulonglong)uVar3 * 8) + 8);
            auStack_620[uVar4 * 2 + -1] = *(undefined8 *)(lVar1 + 0x28);
            *(undefined4 *)(auStack_620 + uVar4 * 2) = *(undefined4 *)(lVar1 + 0x18);
          } while (uVar7 < uVar5);
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar8);
      uVar5 = 0;
      do {
        uVar8 = 0;
        while( true ) {
          uVar6 = 1;
          if ((*(uint *)(param_1 + 0x70) & 0x400) == 0) {
            uVar6 = (uint)*(ushort *)(param_1 + 0x3c);
          }
          if (uVar6 <= uVar8) break;
          plVar2 = *(longlong **)
                    (*(longlong *)(param_2 + (ulonglong)(uVar5 * 0x10 + uVar8) * 8) + 8);
          FUN_180032e10(plVar2);
          FUN_180032470(plVar2 + 0xd);
          uVar8 = uVar8 + 1;
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < *(uint *)(param_1 + 0x80));
    }
    (**(code **)(**(longlong **)(param_1 + 0x58) + 0x90))
              (*(longlong **)(param_1 + 0x58),-(ulonglong)(local_628 != 0) & (ulonglong)&local_628);
    *(undefined1 *)(param_1 + 0x89) = 0;
  }
  *(undefined1 *)(param_1 + 0x3e) = 0;
  return;
}

