# LordAI

LordAI is an AI-powered rental property management platform built to
simplify billing and rent tracking for landlords in Cambodia. It grew out of
a real, personal problem: managing a family rental building by hand.

This repo contains the **frontend**: a React + Vite + TypeScript single-page
app styled with Tailwind CSS, designed to pair with a Python FastAPI backend
for tenant, invoice, and payment data.

> This is a UI/UX prototype from the design and technical-documentation
> phase of the project. It's built to demonstrate the product concept and
> user flows; it is not yet wired up to a live backend or database.

---

## What it does

LordAI has two sides:

- **Landlord dashboard** — manage rooms, tenants, invoices, payments, meter
  readings, and maintenance requests across a property.
- **Renter portal** — view rent history, submit meter readings, request
  maintenance, and check payment status.

Both sides share a common auth flow (login, landlord registration, renter
registration, and a "join community" flow for renters joining an existing
property).

---

## Tech stack

| Layer | Choice |
|---|---|
| Frontend | React + TypeScript, Vite, Tailwind CSS |
| UI components | Radix UI primitives + MUI, styled with a shared design token system |
| Planned backend | Python FastAPI (tenant database, invoicing, auth) |

---

## Project structure

```
src/
  app/
    components/       # Shared UI components (incl. shadcn/ui-style primitives)
    layouts/           # Page layout wrappers
    pages/
      auth/             # Login, landlord registration, renter registration, join-community
      landlord/          # Dashboard, Rooms, Invoice, Payment, Meter, Maintenance
      renter/             # Dashboard, Meter, History, Maintenance
    context/            # AuthContext, LandlordContext
    lib/                  # Shared utilities
  styles/               # Tailwind, theme, and font styles
  imports/                # Design assets imported from Figma
  main.tsx
index.html
vite.config.ts
package.json
```

---

## Getting started

```bash
npm install
npm run dev       # starts the Vite dev server
```

Open the printed local URL (defaults to `:5173`) in your browser.

To build for production:

```bash
npm run build
```

---

## Design origin

The UI was designed in Figma and exported into this codebase; see
`guidelines/Guidelines.md` for the design-system conventions the components
follow, and `ATTRIBUTIONS.md` for third-party asset credit.

---

## Known limitations / not yet implemented

- **Backend**: no FastAPI service is included in this repo yet — pages
  currently run against local/mock state rather than a live API.
- **Utility (OCR) calculator**: the meter-photo OCR and automated bank
  receipt verification are part of the product design but not yet
  implemented in this codebase.
- **Auth**: login and registration flows are UI-complete but not connected
  to a real authentication backend.
