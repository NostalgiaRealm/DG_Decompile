/*
 * FUN_14001561c at 14001561c
 * byte __fastcall FUN_14001561c(longlong param_1)
 * Address ranges: 14001561c-1400157c2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

byte FUN_14001561c(longlong param_1)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  byte bVar4;
  byte bVar5;
  char *pcVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  char cVar9;
  
  pcVar6 = *(char **)(param_1 + 0x40);
  if (pcVar6 != (char *)0x0) {
    cVar9 = '\0';
    do {
      if ((*pcVar6 != '\r') && (*pcVar6 != '\n')) {
        bVar4 = 1;
        goto LAB_14001568d;
      }
      if ((cVar9 == '\r') && (*pcVar6 == '\n')) {
        *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + -1;
      }
      cVar9 = *pcVar6;
      *(char **)(param_1 + 0x40) = pcVar6 + 1;
      if ((pcVar6 + 1 == *(char **)(param_1 + 0x48)) &&
         (uVar7 = FUN_140014bcc(param_1), (char)uVar7 == '\0')) {
        *(undefined8 *)(param_1 + 0x40) = 0;
      }
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 1;
      pcVar6 = *(char **)(param_1 + 0x40);
    } while (pcVar6 != (char *)0x0);
  }
  bVar4 = *(byte *)(param_1 + 0x50);
  if (bVar4 != 0) {
LAB_14001568d:
    bVar2 = false;
    do {
      if (bVar2 || *(char *)(param_1 + 0x50) != '\0') {
        return bVar4;
      }
      bVar4 = FUN_140014c78(param_1);
      if (bVar4 == 0) {
        return 0;
      }
      if (*(int *)(param_1 + 0x68) == 0) {
        if (*(int *)(param_1 + 0x60) != 0) {
          FUN_140024620(*(undefined8 **)(param_1 + 0x58) + 0x200,*(undefined8 **)(param_1 + 0x58),
                        (ulonglong)*(uint *)(param_1 + 0x60));
          *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x60);
          uVar8 = FUN_140015294(param_1);
          bVar4 = (byte)uVar8;
        }
      }
      else if (*(int *)(param_1 + 0x68) == 2) {
        bVar5 = FUN_1400157c4(param_1);
        bVar4 = bVar4 & bVar5;
        if ((**(char **)(param_1 + 0x40) == '\r') || (**(char **)(param_1 + 0x40) == '\n')) {
          bVar3 = true;
        }
        else {
          bVar3 = false;
        }
        if (bVar4 != 0) {
          do {
            if ((bVar3 || *(char *)(param_1 + 0x50) != '\0') ||
               (bVar4 = FUN_140014c78(param_1), bVar4 == 0)) break;
            iVar1 = *(int *)(param_1 + 0x68);
            if (iVar1 == 2) {
              bVar5 = FUN_1400157c4(param_1);
              bVar4 = bVar4 & bVar5;
LAB_14001573f:
              if (bVar4 == 0) break;
            }
            else if (iVar1 != 3) {
              if (iVar1 != 0) {
                bVar4 = 0;
                break;
              }
              if (*(int *)(param_1 + 0x60) != 0) {
                uVar8 = FUN_140015294(param_1);
                bVar4 = (byte)uVar8;
                goto LAB_14001573f;
              }
            }
            if (*(char *)(param_1 + 0x50) == '\0') {
              if ((**(char **)(param_1 + 0x40) == '\r') || (**(char **)(param_1 + 0x40) == '\n')) {
                bVar3 = true;
              }
              else {
                bVar3 = false;
              }
            }
          } while( true );
        }
      }
      if (*(char *)(param_1 + 0x50) == '\0') {
        if ((**(char **)(param_1 + 0x40) == '\r') || (**(char **)(param_1 + 0x40) == '\n')) {
          bVar2 = true;
        }
        else {
          bVar2 = false;
        }
      }
    } while (bVar4 != 0);
  }
  return 0;
}

